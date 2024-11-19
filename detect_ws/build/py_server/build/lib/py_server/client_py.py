import sys
import rclpy
import cv2
from rclpy.node import Node
from cv_bridge import CvBridge, CvBridgeError
from ultralytics import YOLO
from sensor_msgs.msg import Image
import numpy as np
from server_demo.srv import Myimage
# 3.定义节点类；
class MinimalClient(Node):
    def __init__(self):
        super().__init__('minimal_client_py')
        self.cli = self.create_client(Myimage, 'image_test')
        self.req = Myimage.Request()
        self.bridge = CvBridge()  # 初始化 CvBridge 对象

        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('服务连接中，请稍候...')

    def send_request(self, frame):
        try:
            # 将 OpenCV 图像转换为 ROS 图像消息
            image_message = self.bridge.cv2_to_imgmsg(frame, encoding="bgr8")
            self.req.client_image = image_message
            # 异步发送请求
            self.future = self.cli.call_async(self.req)
        except CvBridgeError as e:
            self.get_logger().error(f"Failed to convert frame to Image message: {e}")

def main():
    rclpy.init()
    minimal_client = MinimalClient()#创建的节点

    cap = cv2.VideoCapture(2)
    if not cap.isOpened():
        minimal_client.get_logger().error("无法打开摄像头。")
        return

    while cap.isOpened():
        ret, frame = cap.read()
        if not ret:
            minimal_client.get_logger().error("无法从摄像头读取帧。")
            break

        # 调用 send_request 发送当前帧
        minimal_client.send_request(frame)

        # 等待响应
        rclpy.spin_once(minimal_client, timeout_sec=0.1)
        if minimal_client.future.done():
            try:
                response = minimal_client.future.result()
                # 检查服务端返回的响应内容
                if response.server_image:
                    minimal_client.get_logger().info("成功接收到服务端的响应！")
                    processed_frame = minimal_client.bridge.imgmsg_to_cv2(response.server_image, "bgr8")
                    cv2.imshow("Processed Frame", processed_frame)
                else:
                    minimal_client.get_logger().error("服务端响应的图像为空！")
            except Exception as e:
                minimal_client.get_logger().error(f"获取服务端响应失败：{e}")
        
            
        # 按 'q' 键退出
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    cap.release()
    cv2.destroyAllWindows()
    rclpy.shutdown()

if __name__ == '__main__':
    main()