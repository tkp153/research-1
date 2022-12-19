import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image,CameraInfo
from cv_bridge import CvBridge
from mymsg.msg import Poses,Pose,Transform,MultiTransform
from message_filters import ApproximateTimeSynchronizer,Subscriber
import numpy as np
import time

# Global variables
timer_previous = time.time()

class three_pose_analysis(Node):
    def __init__(self):
        super().__init__("3d_pose_analysis")
        
        self.bridge = CvBridge()
        
        # Topic declared (RealSense D435i)
        
        in_depthinfo_topic = "/camera/aligned_depth_to_color/camera_info"
        in_depth_topic = "/camera/aligned_depth_to_color/image_raw"
        in_topic = "/2d_keypoints"
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
        
        # Publisher 
        
        #self.publisher = self.create_publisher(Poses,out_topic,1)
        
    def three_pose_generator(self,depth,info,poses):
        
        depth_img = self.bridge.imgmsg_to_cv2(depth)

        poses_3d = []
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
            
            id = poses.id
            poses_3d.append(pose_3d)
            self.pose_analysis(poses_3d,id)
            
    def pose_analysis(self,data,id):
        
        # 人の重心座標
        Person_values = MultiTransform()
        Person_value = Transform()
        
        #　挙手の重心座標
        Raise_value = Transform()
        
        global timer_previous
        
        timer = time.time()
        
        for people in data.poses:
            
            keypoints = np.array(people.keypoints).reshape(-1,4)
            keypoints = keypoints[keypoints[:,3] != 0]
            num_keypoints = len(keypoints)
            
            # value initialize
            #共通部分の変数初期化
            key_num = 0
            
            #重心部分の変数初期化
            x_sum_list= []
            y_sum_list= []
            z_sum_list= []
            key_points_count = 0
            
            #挙手部分の変数初期化
            l_num = 0
            r_num = 0
            L_Raise_Hand = False
            R_Raise_Hand = False
            
            # 人の重心及び挙手検出部分
            for k in keypoints:
                float_value = np.array(k[:3] / 200.0,dtype = float)
                
                #座標抽出
                x_pos,y_pos,z_pos = float_value
                
                # 重心
                if(key_num == 5 or key_num == 6 or key_num == 11 or key_num == 12):
                    
                    x_sum_list.append(x_pos)
                    y_sum_list.append(y_pos)
                    z_sum_list.append(z_pos)
                    key_points_count += 1
                    
                #挙手（左手）の情報入手
                
                if(key_num == 5 or key_num == 7 or key_num == 11):
                    if(key_num == 5):    
                        Point_O = np.array([x_pos,y_pos,z_pos])
                        r_num += 1
                    if(key_num == 7):
                        Point_A = np.array([x_pos,y_pos,z_pos])
                        r_num += 1
                    if(key_num == 11):
                        Point_B = Point_O - np.array([0,50,0])
                    if(r_num == 3):
                        L_Raise_theta = self.deg_checker(Point_A, Point_B,Point_O)
                        Hand_Switch = "Left"
                        L_Raise_Hand = self.raise_hand_checker(L_Raise_theta,Point_A,Point_B,Hand_Switch)
                    
                #挙手（右手）の情報入手
                if(key_num == 6 or key_num == 8 or key_num == 12):
                    if(key_num == 6):
                        Point_X = np.array([x_pos,y_pos,z_pos])
                        l_num += 1
                    if(key_num == 8):
                        Point_C = np.array([x_pos,y_pos,z_pos])
                        l_num += 1
                    if(key_num == 12):
                        Point_D = Point_X - np.array([0,50,0])
                        l_num += 1
                    if(l_num == 3):
                        R_Raise_theta = self.deg_checker(Point_C,Point_D,Point_X)
                        Hand_Switch ="Right"
                        R_Raise_Hand = self.raise_hand_checker(R_Raise_theta,Point_A,Point_B,Hand_Switch)
                
                #カウント増加
                key_num += 1
        
                # 最終キーポイント及び重心を取るための情報を得られた場合実行
                if(key_num == num_keypoints - 1 and key_points_count == 4):
                    #重心計算関数実行
                    Result_Of_Center_Gravity = self.CenterOfGravity(x_sum_list, y_sum_list, z_sum_list)
                        
                    #print(Result_Of_Center_Gravity)
                    if Result_Of_Center_Gravity is not None:
                        Person_value.transform.translation.x,Person_value.transform.translation.y,Person_value.transform.translation.z = Result_Of_Center_Gravity
                        Person_value.transform.rotation.x = 0.0
                        Person_value.transform.rotation.y = 0.0
                        Person_value.transform.rotation.z = 0.0
                        Person_value.transform.rotation.w = 1.0
                        
                        Person_values.transforms.append(Person_value)
                    
                    
                    #print("timer: {}".format(timer))
                    #print("pre_timer:{}".format(timer_previous) )
                    if(Result_Of_Center_Gravity is not None):
                    
                        if(L_Raise_Hand == True and R_Raise_Hand == True):
                            self.pub_2.publish(Person_value)
                            timer_previous = timer
                        elif(L_Raise_Hand == True):
                            print("You are Raise the Hand")
                            self.pub_2.publish(Person_value)
                            timer_previous = timer
                        elif(R_Raise_Hand == True):
                            print("You are Raise the Hand")
                            self.pub_2.publish(Person_value)
                            timer_previous = timer
                            
            
            
    #重心計算メゾット
    def CenterOfGravity(self,x_sum,y_sum,z_sum):
        X_data = x_sum
        Y_data = y_sum
        Z_data = z_sum 
        
        #キーポイント検索（キーポイント未検出があるかどうか）
        # 含まれていなかったらTRUEを返す。
        X_data_result = 0.0 not in X_data
        Y_data_result = 0.0 not in Y_data
        Z_data_result = 0.0 not in Z_data
        
        if(X_data_result == True and Y_data_result == True and Z_data_result == True):
            
            #重心計算
            X_Center = sum(X_data) / 4 
            Y_Center = sum(Y_data) / 4
            Z_Center = sum(Z_data) / 4
            
            CenterOfGravity = np.array([X_Center, Y_Center, Z_Center])
            #if CenterOfGravity is None:
            
            return CenterOfGravity
        
    '''角度計算メゾット'''
    def deg_checker(self,Point1,Point2,Origin):
        
        # ベクトル生成
        Vector1 = Point1 - Origin
        Vector2 = Point2 - Origin
        
        #ベクトル長さ
        Length1 = np.linalg.norm(Vector1)
        Length2 = np.linalg.norm(Vector2)
        
        #内積の計算
        Dot = np.dot(Vector1,Vector2)
        
        #COSθを計算
        COS_Theta = Dot / (Length1 * Length2)
        Theta = np.arccos(COS_Theta) * 180 / np.pi
        #print(Theta)
        if Theta is None:
            Theta = 180
            print("Object is None")
        #print(Theta)
        return Theta
    
    def raise_hand_checker(self,Theta,Point1,Point2,hand_switch):
        
        #手を挙げた場合０度付近になる。
        
        #左手のチェック実施
        if(hand_switch == "Left"):
            if( Theta < 50 
                and Point1[0] != 0.0 and Point1[1] != 0.0 and Point1[2] != 0.0 
                and Point2[0] != 0.0 and Point2[1] != 0.0 and Point2[2] != 0.0 ):

                self.count_L  += 1
                
                #４フレーム以上カウントされていた場合；Output　-> 挙手（左手）
                if(self.count_L > 2):
                    return True
                else:
                    return False
        
        #右手チェック
        elif(hand_switch == "Right"):
            if(Theta < 50
                and Point1[0] != 0.0 and Point1[1] != 0.0 and Point1[2] != 0.0
                and Point2[0] != 0.0 and Point2[1] != 0.0 and Point2[2] != 0.0):
                
                self.count_R += 1
                
                if(self.count_R > 2):
                    return True
                else:
                    return False
        else:
            self.get_logger().error(" out of range !!! 変数の中身確認！！！")

def main():
    
    rclpy.init()
    
    node = three_pose_analysis()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()
