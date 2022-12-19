import rclpy
from rclpy.node import Node
from mymsg.srv import ImageData
import time

class ImageCutter(Node):
    def __init__(self):
        super().__init__('ImageCutter')
        
        self.services = self.create_service(ImageData,"image_data",self.cutter)
        
    def cutter(self,request,response):
        time.sleep(5)
        if request.input_count % 4 == 0:
            response.output_cut = True
            response.output_image = request.input_data
        else:
            response.output_cut = False
        
        response.output_count = request.input_count + 1
        return response
    
def main():
    rclpy.init()
    
    Node = ImageCutter()
    
    rclpy.spin(Node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()