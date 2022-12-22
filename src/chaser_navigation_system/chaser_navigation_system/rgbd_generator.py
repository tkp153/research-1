import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image,CameraInfo
from cv_bridge import CvBridge
from mymsg.msg import Poses,Pose

from message_filters import ApproximateTimeSynchronizer,Subscriber
import numpy as np

class rgbd_generator(Node):
    def __init__(self):
        super().__init__("rgbd_generator")
        
        self.bridge = CvBridge()
        
        # Topic declared (RealSense D435i)
        
        in_depthinfo_topic = "/camera/aligned_depth_to_color/camera_info"
        in_depth_topic = "/camera/aligned_depth_to_color/image_raw"
        in_topic = "/two_d_keypoints"
        out_topic = "poses_analysis"
        
        # QOS Setting 
        
        video_qos = rclpy.qos.QoSProfile(depth = 10)
        video_qos.reliability = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        
        #  Multi Subscriber
        
        sub_depth = Subscriber(self,Image,in_depth_topic,qos_profile = video_qos)
        sub_info = Subscriber(self,CameraInfo,in_depthinfo_topic,qos_profile =  video_qos)
        sub_poses = Subscriber(self,Poses,in_topic,qos_profile =  video_qos)
        ts = ApproximateTimeSynchronizer([sub_depth,sub_info,sub_poses],100,0.2)
        ts.registerCallback(self.three_pose_generator)
        
        self.pub = self.create_publisher(Poses,out_topic,1)
        
        def three_pose_generator(self,depth,info,poses):
            depth_img = self.bridge.imgmsg_to_cv2(depth)
            
            poses_3d =[]
            ids = poses.id
            
            for p in poses.poses:
                
                keypoints = np.asarray(p.keypoints).reshape(-1, 3)  # x, y, conf
                keypoints_pos = np.floor(keypoints).astype(np.int64)

                idx = keypoints_pos[:, 1] * depth_img.shape[1] + keypoints_pos[:, 0]
                flag = idx >= 0
                flag[flag] = idx[flag] < (depth_img.shape[0] * depth_img.shape[1])
                flag[flag] = keypoints[flag, 2] != 0

                depth_values = np.zeros((len(keypoints_pos), 1))
                depth_values[flag] = depth_img.reshape(-1, 1)[idx[flag]]

                xy = (keypoints[:, :2] - np.array([info.k[2], info.k[5]])) / np.array(
                [info.k[0], info.k[4]]
                )
                xy = xy * depth_values

                keypoints_3d = np.hstack((xy, depth_values, keypoints[:, 2:]))
                keypoints_3d[~flag] = np.array([0, 0, 0, 0])

                pose_3d = Pose()
                pose_3d.keypoints = list(keypoints_3d.reshape(-1))
                poses_3d.append(pose_3d)
            
            self.publish(poses.header,poses_3d,ids)
            
        def publish(self,header,poses,ids):
            
            msg = Poses()
            msg.header.stamp = header.stamp
            msg.poses =[]
            msg.id = ids
            
            for p in poses:
                pmsg = Pose()
                pmsg.keypoints = p.keypoints
                msg.poses.append(pmsg)
                
            self.pub.publish(msg)
            
def main():
    print("Starting...")
    rclpy.init()
    #　ノード初期化
    node =rgbd_generator()
    # 処理を実行して、ノードが終了するまでブロックする。
    rclpy.spin(node)
    #初期化コンテキストを終了する。
    rclpy.shutdown()
    
if __name__ =="__main__":
    main()