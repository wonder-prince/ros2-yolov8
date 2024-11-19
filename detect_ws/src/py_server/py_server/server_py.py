import rclpy
from rclpy.node import Node
from ultralytics import YOLO
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
from server_demo.srv import Myimage
import cv2

class MinimalService(Node):
    def __init__(self):
        super().__init__('minimal_service_py')
        self.srv = self.create_service(Myimage, 'image_test', self.add_two_ints_callback)
        self.bridge = CvBridge()
        self.model = YOLO('/home/interstellar/face_detect/detect_ws/yolo_model/yolov8n.pt')
        self.get_logger().info("服务端启动，模型已加载！")

    def add_two_ints_callback(self, request, response):
        try:
            # 将 ROS 图像消息转换为 OpenCV 图像
            img = self.bridge.imgmsg_to_cv2(request.client_image, "bgr8")
            #img = cv2.resize(img_re, (320, 320))  # 缩小图像大小
            self.get_logger().info(f"接收到图像，尺寸：{img.shape}")

            # YOLO 推理
            results = self.model(img)
            boxes = results[0].boxes.xywh.cpu().numpy()  # 转为 numpy 数组
            track_ids = (
                results[0].boxes.id.int().cpu().tolist()
                if hasattr(results[0].boxes, 'id') and results[0].boxes.id is not None
                else []
            )

            # 打印检测结果
            for i, box in enumerate(boxes):
                x, y, w, h = box
                track_id = track_ids[i] if len(track_ids) > i else None
                self.get_logger().info(f"目标 {i+1}: 中心=({x:.2f}, {y:.2f}), 宽={w:.2f}, 高={h:.2f}, ID={track_id}")

            # 绘制检测结果并转换为 ROS 图像消息
            annotated_frame = results[0].plot()

            # 在服务端直接显示标注后的图像
            display_frame = cv2.resize(annotated_frame, (640, 480))  # 显示窗口调整为 640x480
            cv2.imshow("Annotated Image", annotated_frame)
            cv2.waitKey(1)  # 等待一段时间以更新显示窗口

            response.server_image = self.bridge.cv2_to_imgmsg(annotated_frame, encoding="bgr8")
            self.get_logger().info("图像处理完成，已返回响应！")

        except CvBridgeError as e:
            self.get_logger().error(f"图像转换失败：{e}")
            response.server_image = None
        except Exception as e:
            self.get_logger().error(f"目标检测失败：{e}")
            response.server_image = None

        return response

def main():
    rclpy.init()
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
