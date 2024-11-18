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
    try:
        # 初始化 CvBridge
        bridge = CvBridge()

        # 将客户端发送的图像消息转换为 OpenCV 格式
        self.get_logger().info("服务端开始处理请求...")
        img = bridge.imgmsg_to_cv2(request.client_image, "bgr8")
        self.get_logger().info(f"接收到的图像尺寸：{img.shape}")

        # 调用 YOLO 模型进行目标检测
        results = model(img)

        # 获取框的坐标
        boxes = results[0].boxes.xywh.cpu().numpy() if results[0].boxes else []
        # 获取目标ID（如果存在）
        if hasattr(results[0].boxes, 'id') and results[0].boxes.id is not None:
            track_ids = results[0].boxes.id.int().cpu().tolist()
        else:
            track_ids = []

        # 输出检测结果
        for i, box in enumerate(boxes):
            x, y, w, h = box  # 解包坐标
            track_id = track_ids[i] if len(track_ids) > i else None
            self.get_logger().info(f"目标 {i+1}: 中心坐标=({x:.2f}, {y:.2f}), 宽={w:.2f}, 高={h:.2f}, ID={track_id}")

        # 在帧上绘制检测结果
        self.get_logger().info("绘制检测结果...")
        annotated_frame = results[0].plot()

        # 转换处理后的图像为 ROS 图像消息
        image_message = bridge.cv2_to_imgmsg(annotated_frame, encoding="bgr8")
        response.server_image = image_message
        self.get_logger().info("服务端处理完成，响应已准备好。")

    except Exception as e:
        # 捕获所有异常，记录错误日志
        self.get_logger().error(f"处理请求失败：{e}")
        response.server_image = None

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