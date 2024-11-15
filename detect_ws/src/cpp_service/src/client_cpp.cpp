#include "cv_bridge/cv_bridge.h"
#include "rclcpp/rclcpp.hpp"
#include "server_demo/srv/myimage.hpp"
#include "opencv2/opencv.hpp"
#include "cv_bridge/cv_bridge.h"
using server_demo::srv::Myimage;
using namespace std::chrono_literals;
 
// 3.定义节点类；
class MinimalClient: public rclcpp::Node{
  public:
    MinimalClient():Node("minimal_client"){
      // 3-1.创建客户端；
      client = this->create_client<Myimage>("image_test");
      RCLCPP_INFO(this->get_logger(),"客户端创建，等待连接服务端！");
    }
    // 3-2.等待服务连接；
    bool connect_server(){
      while (!client->wait_for_service(1s))
      {
        if (!rclcpp::ok())
        {
          RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"强制退出！");
          return false;
        }
 
        RCLCPP_INFO(this->get_logger(),"服务连接中，请稍候...");
      }
      return true;
    }
    // 3-3.组织请求数据并发送；
    rclcpp::Client<Myimage>::FutureAndRequestId send_request(sensor_msgs::msg::Image image1){
      auto request = std::make_shared<Myimage::Request>();
      request->client_image = image1;
      return client->async_send_request(request);
    }
 
 
  private:
    rclcpp::Client<Myimage>::SharedPtr client;
};
 
int main(int argc, char ** argv)
{
  // 2.初始化 ROS2 客户端；
  rclcpp::init(argc,argv);
  // 4.创建对象指针并调用其功能；
  auto client = std::make_shared<MinimalClient>();
  bool flag = client->connect_server();
  if (!flag)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"服务连接失败！");
    return 0;
  }
  cv::Mat img= cv::imread("/home/interstellar/face_detect/detect_ws/src/cpp_service/src/zidane.jpg",1);
  sensor_msgs::msg::Image::SharedPtr img1 = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", img).toImageMsg();
  auto response = client->send_request(*img1);
 
  // 处理响应
  if (rclcpp::spin_until_future_complete(client,response) == rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(client->get_logger(),"请求正常处理");
    
      cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(response.get()->server_image, sensor_msgs::image_encodings::BGR8);
      cv::Mat s_img= cv_ptr->image;
      cv::resize(s_img, s_img, cv::Size(s_img.size().width,s_img.size().height));
      cv::imshow("client",s_img);
      cv::waitKey(5000);
      cv::destroyAllWindows();
 
  } else {
    RCLCPP_INFO(client->get_logger(),"请求异常");
  }
 
  // 5.释放资源。
  rclcpp::shutdown();
  return 0;
}