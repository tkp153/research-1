import rclpy
from rclpy.node import Node
from mymsg.srv import Imagedata
import time

class ImageCutter(Node):
    def __init__(self):
        super().__init__('ImageCutter')
        
        self.service = self.create_service(Imagedata,'image_data',self.cutter)
        
    def cutter(self,request,response):
        time.sleep(1)
        if request.input_count % 4 == 0:
            response.output_cut = True
        else:
            response.output_cut = False
            #response.output_data = request.input_data
        response.output_data = request.input_data
        response.output_count = request.input_count + 1
        return response
    
def main():
    rclpy.init()
    
    Node = ImageCutter()
    
    rclpy.spin(Node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()