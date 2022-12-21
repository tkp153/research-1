import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from mymsg.msg import Poses,Pose
from mymsg.srv import Imagedata
from motpy import Detection,MultiObjectTracker
from openpifpaf.predictor import Predictor
import onnxruntime as ort
from yolox.utils import  multiclass_nms, demo_postprocess
from yolox.data.data_augment import preproc as preprocess
import numpy as np
import sys
from functools import partial

class Image_Input(Node):
    def __init__(self):
        super().__init__("Image_Input")
        
        self.bridge = CvBridge()
        
        # RealSense D435i topic list(RGB data)
        in_topic ="/camera/color/image_raw"
        out_topic ="human_pose"
        scale = 1.0
        video_qos = rclpy.qos.QoSProfile(depth = 10)
        video_qos.reliability = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        
        # Counter value
        self.count = 0
        
        # openpifpaf
        self.predictor = Predictor()
        
        # YOLOX
        provider = ['CUDAExecutionProvider','CPUExecutionProvider']
        self.session = ort.InferenceSession('/root/YOLOX/yolox_s.onnx', providers=provider)
        self.input_size = (640, 640)
        
        # Motpy 
        self.tracker = MultiObjectTracker(dt = 0.1)
        
        # PUB-SUB
        self.sub = self.create_subscription(Image,in_topic,self.Image_PreProcessor,video_qos)
        
        self.publish = self.create_publisher(Poses,"two_d_keypoints",10)
        
        
    def Image_PreProcessor(self,data):
        
        if(self.count % 4 == 0):
            rgb_image = self.bridge.imgmsg_to_cv2(data,"rgb8")
            self.Image_Processor(rgb_image)
            
        self.count += 1
        '''
        ## service client
        cli = self.create_client(Imagedata,"image_data")
        # サーバー接続まで待機
        while not cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not available...")

        count = self.count
        request = Imagedata.Request()
        request.input_data = data
        request.input_count = count
        
        future = cli.call_async(request)
        future.add_done_callback(partial(self.services_callback))
        
        '''
        
    def services_callback(self,future):    
        
        try:
            response = future.result()
            response_check = response.output_cut
            self.count = response.output_count
            if(response_check == True):
                    image_data = response.output_data
                    rgb_image = self.bridge.imgmsg_to_cv2(image_data,"rgb8")
                    self.Image_Processor(rgb_image)
            else:    
                pass
        except Exception as e:
            self.get_logger().info("Error: %r" % (e,))
        '''
        if future.done():  try:
                response = future.result()
                response_check = response.output_cut
                self.count = response.output_count
                if(response_check == True):
                    image_data = response.output_image
                    rgb_image = self.bridge.imgmsg_to_cv2(image_data,"rgb8")
                    self.Image_Processor(rgb_image)
                else:    
                    pass
            except Exception as e:
                self.get_logger().info("Error: %r" % (e,))
            print("ok")
            try:
                response = future.result()
                response_check = response.output_cut
                self.count = response.output_count
                if(response_check == True):
                    image_data = response.output_image
                    rgb_image = self.bridge.imgmsg_to_cv2(image_data,"rgb8")
                    self.Image_Processor(rgb_image)
                else:    
                    pass
            except Exception as e:
                self.get_logger().info("Error: %r" % (e,))
        else:
            pass
        '''
        
        
    def Image_Processor(self,data):
        
        ids = []
        
        frame = data
        height,width,channel = frame.shape
        img, ratio = preprocess(frame, self.input_size)
        ort_inputs = {self.session.get_inputs()[0].name: img[None, :, :, :]}
        output = self.session.run(None, ort_inputs)
        predictions = demo_postprocess(output[0], self.input_size, p6=False)[0]
        boxes = predictions[:, :4]
        scores = predictions[:, 4:5] * predictions[:, 5:]
        boxes_xyxy = np.ones_like(boxes)
        boxes_xyxy[:, 0] = boxes[:, 0] - boxes[:, 2]/2.
        boxes_xyxy[:, 1] = boxes[:, 1] - boxes[:, 3]/2.
        boxes_xyxy[:, 2] = boxes[:, 0] + boxes[:, 2]/2.
        boxes_xyxy[:, 3] = boxes[:, 1] + boxes[:, 3]/2.
        boxes_xyxy /= ratio
        dets = multiclass_nms(boxes_xyxy, scores, nms_thr=0.45, score_thr=0.1)
        
        if dets is not None:
            final_boxes, final_scores, final_cls_inds = dets[:, :4], dets[:, 4], dets[:, 5]
                
            #行数カウント
            Count_XAxis = final_boxes.shape[1]
            Count_YAxis = final_boxes.shape[0]
                
            #データキャッシュ
            data_x_min = []
            data_y_min = []
            data_x_max = []
            data_y_max = []
            i = 0
            people_count = 0
            for i in range(Count_YAxis):
                if final_cls_inds[i] == 0.0:
                    data_x_min.append(final_boxes[i][0])
                    data_y_min.append(final_boxes[i][1])
                    data_x_max.append(final_boxes[i][2])
                    data_y_max.append(final_boxes[i][3])
                    people_count += 1
                
            if(people_count > 0):
                #データ分析
                Xmin = min(data_x_min)
                Ymin = min(data_y_min)
                Xmax = max(data_x_max)
                Ymax = max(data_y_max)

            #　画像拡大処理
            if(Xmin - 20 > 0):
                Xmin -= 20
            else:
                Xmin = 0
            if(Ymin - 20 > 0):
                Ymin -= 20
            else:
                Ymin = 0
            if(Xmax + 20 < width):
                Xmax += 20
            else:
                Xmax = width
            if(Ymax + 20 < height):
                Ymax += 20
            else:
                Ymax = height
            #画像トリミング処理
            cut_image = frame[int(Ymin):int(Ymax),int(Xmin):int(Xmax)]
            bbox,score,label,keypoints= self.OpenPifPaf_Processor(cut_image,Xmin,Ymin)
            tracks = self.motpy_track(bbox,score,label)
            for trc in tracks:
                id = trc.id
                ids.append(id)
                
                    
            
        
        
    def OpenPifPaf_Processor(self,input,xmin,ymin):
        pred, _,meta = self.predictor.numpy_image(input)
        
        poses = []
        
        for p in pred:
            pose = p.json_data()
            poses.append(pose)
            
        bbox =[]
        scores = []
        labels = []
        keypoints_data = []
        
        for p in poses:
            my_coco_box = p['bbox']
            keypoints = p['keypoints']
            coco_box = self.xywh_to_xyxy(my_coco_box,xmin, ymin)
            keypoint = self.keypoints_recover(keypoints,xmin,ymin)
            score = p['score']
            label = p['labels']
            
            keypoints_data.append(keypoint)
            bbox.append(coco_box)
            scores.append(score)
            labels.append(label)
            
        return bbox,scores,labels,keypoints_data
            
            
    def xywh_to_xyxy(self,input,xmin,ymin):
        x1 = input[0] + xmin
        y1 = input[1] + ymin
        w = input[2]
        h = input[3]
        
        x2 = x1 + w
        y2 = y1 + h
        
        output = np.array([x1,y1,x2,y2])
        return output
    
    def keypoints_recover(self,keypoints,xmin,ymin):
        add_data = np.array([xmin,ymin])
        keypoints_new = np.add(keypoints,add_data)
        return keypoints_new
            
    
    def motpy_track(self,a,b,c):
        
        boxes = a
        scores = b
        labels = c
        
        outputs = [Detection(box = b ,score = s , class_id= l)
                for b,s,l in zip(boxes,scores,labels)]
        
        self.tracker.step(detections=outputs)
        
        tracks = self.tracker.active_tracks()
        
        return tracks
    
    def publish(self,header,data,id):
        
        msg = Poses()
        msg.header.stamp = header.stamp
        msg.pose = data
        msg.id = id
        
        self.publisher.publish(msg)
        
def main():
    
    rclpy.init()
    
    node = Image_Input()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()