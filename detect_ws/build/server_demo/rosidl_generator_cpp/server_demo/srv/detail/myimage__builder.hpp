// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from server_demo:srv/Myimage.idl
// generated code does not contain a copyright notice

#ifndef SERVER_DEMO__SRV__DETAIL__MYIMAGE__BUILDER_HPP_
#define SERVER_DEMO__SRV__DETAIL__MYIMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "server_demo/srv/detail/myimage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace server_demo
{

namespace srv
{

namespace builder
{

class Init_Myimage_Request_client_image
{
public:
  Init_Myimage_Request_client_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::server_demo::srv::Myimage_Request client_image(::server_demo::srv::Myimage_Request::_client_image_type arg)
  {
    msg_.client_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::server_demo::srv::Myimage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::server_demo::srv::Myimage_Request>()
{
  return server_demo::srv::builder::Init_Myimage_Request_client_image();
}

}  // namespace server_demo


namespace server_demo
{

namespace srv
{

namespace builder
{

class Init_Myimage_Response_server_image
{
public:
  Init_Myimage_Response_server_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::server_demo::srv::Myimage_Response server_image(::server_demo::srv::Myimage_Response::_server_image_type arg)
  {
    msg_.server_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::server_demo::srv::Myimage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::server_demo::srv::Myimage_Response>()
{
  return server_demo::srv::builder::Init_Myimage_Response_server_image();
}

}  // namespace server_demo

#endif  // SERVER_DEMO__SRV__DETAIL__MYIMAGE__BUILDER_HPP_
