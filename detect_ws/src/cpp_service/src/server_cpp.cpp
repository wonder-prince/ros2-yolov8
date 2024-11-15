#include "rclcpp/rclcpp.hpp"
#include "server_demo/srv/myimage.hpp"
#include "opencv2/opencv.hpp"
#include "cv_bridge/cv_bridge.h"
#include "std_msgs/msg/string.hpp"
using server_demo::srv::Myimage;
using std::placeholders::_1;
using std::placeholders::_2;
using namespace std::chrono_literals;
 
// 3.定义节点类；
class MinimalService: public rclcpp::Node{
  public:
    MinimalService():Node("minimal_service"){
      // 3-1.创建服务端；
      server = this->create_service<Myimage>("image_test",std::bind(&MinimalService::appect, this, _1, _2));
      RCLCPP_INFO(this->get_logger(),"image_test 服务端启动完毕，等待请求提交...");
    }
  private:
    rclcpp::Service<Myimage>::SharedPtr server;
    
    // 3-2.处理请求数据并响应结果。
    void appect(const Myimage::Request::SharedPtr req, const Myimage::Response::SharedPtr res) {
    // 声明变量
    cv::Mat img1, img;

    try {
        // 转换客户端发送的图像为 OpenCV 格式
        cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(req->client_image, sensor_msgs::image_encodings::BGR8);
        img1 = cv_ptr->image;

        if (img1.empty()) {
            RCLCPP_ERROR(this->get_logger(), "Client image is empty.");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Client image successfully received and converted.");
    } catch (const cv_bridge::Exception &e) {
        RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
        return;
    }

    try {
        // 加载服务器端的预定义图片
        img = cv::imread("/home/interstellar/face_detect/detect_ws/src/cpp_service/src/bus.jpg", 1);
        if (img.empty()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to load server image. Check file path.");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Server image successfully loaded.");
    } catch (const cv::Exception &e) {
        RCLCPP_ERROR(this->get_logger(), "OpenCV exception when loading server image: %s", e.what());
        return;
    }

    try {
        // 调整客户端图像尺寸为服务器端图像尺寸
        cv::resize(img1, img1, cv::Size(img.size().width, img.size().height));
        RCLCPP_INFO(this->get_logger(), "Client image successfully resized to match server image dimensions.");
    } catch (const cv::Exception &e) {
        RCLCPP_ERROR(this->get_logger(), "OpenCV exception during resize: %s", e.what());
        return;
    }

    try {
        // 显示调整后的客户端图片
        cv::imshow("Server", img1);
        cv::waitKey(0); // 等待用户按键关闭窗口
        cv::destroyAllWindows();
        RCLCPP_INFO(this->get_logger(), "Displayed client image successfully.");
    } catch (const cv::Exception &e) {
        RCLCPP_ERROR(this->get_logger(), "OpenCV exception during imshow: %s", e.what());
        return;
    }

    try {
        // 转换服务器端图片为 ROS 消息格式
        sensor_msgs::msg::Image::SharedPtr msg = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", img).toImageMsg();
        res->server_image = *msg; // 将服务器端图片赋值到响应消息
        RCLCPP_INFO(this->get_logger(), "Server image successfully sent to client.");
    } catch (const std::exception &e) {
        RCLCPP_ERROR(this->get_logger(), "Exception when converting server image to ROS message: %s", e.what());
        return;
    }
}

};
 
int main(int argc, char const *argv[])
{
  // 2.初始化 ROS2 客户端；
  rclcpp::init(argc,argv);
 
  // 4.调用spin函数，并传入节点对象指针；
  auto server = std::make_shared<MinimalService>();
  rclcpp::spin(server);
 
  // 5.释放资源。
  rclcpp::shutdown();
  return 0;
}