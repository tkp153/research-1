import rclpy
from rclpy.node import Node
from tf2_ros import StaticTransformBroadcaster,TransformBroadcaster,TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
import csv
import time
import math
from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import TransformStamped
from mymsg.msg import Transform,MultiTransform

class pose_tf2(Node):
    def __init__(self):
        super().__init__('SateliteBroadcaster')
        
        
        # 基準点
        Transform_stamped = TransformStamped()
        Transform_stamped.header.stamp = self.get_clock().now().to_msg()
        Transform_stamped.header.frame_id = "base_footprint"
        Transform_stamped.child_frame_id = 'camera'
        Transform_stamped.transform.translation.x = 0.0
        Transform_stamped.transform.translation.y = 0.0
        Transform_stamped.transform.translation.z = 3.0
        Transform_stamped.transform.rotation.x = 0.0
        Transform_stamped.transform.rotation.y = 0.0
        Transform_stamped.transform.rotation.z = 0.0
        Transform_stamped.transform.rotation.w = 1.0
        
        broadcaster = StaticTransformBroadcaster(self)
        broadcaster.sendTransform(Transform_stamped)
        
        video_qos = rclpy.qos.QoSProfile(depth = 10)
        video_qos.reliability = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        self.temp = 0
        
        self.target_frame = "base_footprint"
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer,self)
        self.filename = "waypoint_data.csv"
        #with open(self.filename, "w",encoding="utf_8") as f:
        
        
        #人間
        self.sub = self.create_subscription(MultiTransform,"/person_check",self.human,1)
        self.sub2 = self.create_subscription(Transform,"/raise_hand_info",self.raise_hand_tf,1)
        #self.sub3 = self.create_subscription(Imu,"/camera/imu",self.IMU,video_qos)
        self.pub = self.create_publisher(PoseStamped,"goal_data",10)

    def human(self,data):
        people =[]
        dsg = []
        id = 0
        id_2 = 0
        broadcast2 = TransformBroadcaster(self)
        
        #print(len(data.transforms))
        
        for n in range(len(data.transforms)):
            text_id = 'human_{}'.format(id)
            people.append(text_id)
            id += 1
        
        for num in range(len(data.transforms)):
            msg = TransformStamped()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = "camera"
            msg.child_frame_id = people[id_2]
            #print(data.transforms[0])
            
            msg.transform.translation.x = data.transforms[id_2].transform.translation.z
            msg.transform.translation.y = data.transforms[id_2].transform.translation.x * -1
            msg.transform.translation.z = data.transforms[id_2].transform.translation.y * -1
            msg.transform.rotation.x = data.transforms[id_2].transform.rotation.x
            msg.transform.rotation.y = data.transforms[id_2].transform.rotation.y
            msg.transform.rotation.z = data.transforms[id_2].transform.rotation.z
            msg.transform.rotation.w = data.transforms[id_2].transform.rotation.w
            
            broadcast2.sendTransform(msg)
            dsg.append(msg)
            id_2 += 1
    def raise_hand_tf(self,data):
            global pre_time
            gsg = TransformStamped()
            broadcast3 = TransformBroadcaster(self)
            gsg.header.stamp = self.get_clock().now().to_msg()
            gsg.header.frame_id = "odom"
            gsg.child_frame_id = "RAISE_HAND"
            gsg.transform.translation.x = data.transform.translation.z
            gsg.transform.translation.y = data.transform.translation.x * -1
            gsg.transform.translation.z = data.transform.translation.y * -1
            gsg.transform.rotation.x = data.transform.rotation.x
            gsg.transform.rotation.y = data.transform.rotation.y
            gsg.transform.rotation.z = data.transform.rotation.z
            gsg.transform.rotation.w = data.transform.rotation.w
        
            broadcast3.sendTransform(gsg)
            time_now = time.time()
            if( time_now - pre_time > 10):
                self.writing_waypoints(gsg)
                
    #WayPoints CSV Writer
    def writing_waypoints(self,data): 
        source_frame = data.child_frame_id
        
        try:
            when = rclpy.time.Time()
            trans = self.tf_buffer.lookup_transform(self.target_frame, source_frame, when)
            pos_x = trans.transform.translation.x
            pos_y = trans.transform.translation.y
            pos_z = trans.transform.translation.z
            rot_x = trans.transform.rotation.x
            rot_y = trans.transform.rotation.y
            rot_z = trans.transform.rotation.z
            rot_w = trans.transform.rotation.w
            
            data_row = [pos_x, pos_y, pos_z, rot_x, rot_y,rot_z,rot_w]
            f =open(self.filename, "a",encoding="utf_8")
            writer = csv.writer(f)
            writer.writerow(data_row)
            print("write data to file")
            f.close()
            
            go = PoseStamped()
            go.header.frame_id = "map"
            go.header.stamp = rclpy.time.time()
            go.pose.position.x = data_row[0]
            go.pose.position.y = data_row[1]
            go.pose.position.z = data_row[2]
            go.pose.orientation.x = data_row[3]
            go.pose.orientation.y = data_row[4]
            go.pose.orientation.z = data_row[5]
            go.pose.orientation.w = data_row[6]
            self.pub.publish(go)
            
        except TransformException:
            pass
        
def main():
    rclpy.init()
    
    node = pose_tf2()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()