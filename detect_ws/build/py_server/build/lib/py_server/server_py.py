import rclpy
from rclpy.node import Node
from ultralytics import YOLO
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
import numpy as np
from server_demo.srv import Myimage
# 3.定义节点类；
class MinimalService(Node):
 
    def __init__(self):
        super().__init__('minimal_service_py')
        # 3-1.创建服务端；
        self.srv = self.create_service(Myimage,'image_test', self.add_two_ints_callback)
        self.get_logger().info("服务端启动！")
 
    # 3-2.处理请求数据并响应结果。
    def add_two_ints_callback(self, request, response):
        bridge = CvBridge()
        img =bridge.imgmsg_to_cv2(request.client_image, "bgr8")
        results = model(img)
        # 获取框
        #boxes = results[0].boxes.xywh.cpu()
        # track_ids = results[0].boxes.id.int().cpu().tolist()
        # 在帧上展示结果
        annotated_frame = results[0].plot()
        bridge = CvBridge()
        image_message  = bridge.cv2_to_imgmsg(annotated_frame,encoding="bgr8")
        response.server_image = image_message
        return response
 
 
def main():
    # 2.初始化 ROS2 客户端；
    rclpy.init()
    global model
    model = YOLO('/home/interstellar/face_detect/detect_ws/yolo_model/yolov8n.pt') #调用yolo官方模型
    # 4.调用spin函数，并传入节点对象；
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    # 5.释放资源。
    rclpy.shutdown()
 
 
if __name__ == '__main__':
    main()