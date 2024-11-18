import rclpy
from rclpy.node import Node
from ultralytics import YOLO
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
import numpy as np
from server_demo.srv import Myimage
import cv2
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

        # 获取框的坐标
        boxes = results[0].boxes.xywh.cpu().numpy()  # 转为numpy数组 (x, y, w, h)
        #获取目标ID
        if hasattr(results[0].boxes, 'id') and results[0].boxes.id is not None:
            track_ids = results[0].boxes.id.int().cpu().tolist()
        else:
            track_ids = []

        
        # 输出框的坐标和ID
        for i, box in enumerate(boxes):
            x, y, w, h = box  # 解包坐标
            track_id = track_ids[i] if len(track_ids) > i else None  # 处理ID
            self.get_logger().info(f"目标 {i+1}: 中心坐标=({x:.2f}, {y:.2f}), 宽={w:.2f}, 高={h:.2f}, ID={track_id}")
        
        #在帧上展示结果
        annotated_frame = results[0].plot()
        #cv2.imshow("detect result",annotated_frame)
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