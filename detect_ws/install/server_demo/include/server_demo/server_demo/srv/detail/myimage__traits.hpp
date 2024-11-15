// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from server_demo:srv/Myimage.idl
// generated code does not contain a copyright notice

#ifndef SERVER_DEMO__SRV__DETAIL__MYIMAGE__TRAITS_HPP_
#define SERVER_DEMO__SRV__DETAIL__MYIMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "server_demo/srv/detail/myimage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'client_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace server_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const Myimage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: client_image
  {
    out << "client_image: ";
    to_flow_style_yaml(msg.client_image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Myimage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: client_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_image:\n";
    to_block_style_yaml(msg.client_image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Myimage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace server_demo

namespace rosidl_generator_traits
{

[[deprecated("use server_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const server_demo::srv::Myimage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  server_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use server_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const server_demo::srv::Myimage_Request & msg)
{
  return server_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<server_demo::srv::Myimage_Request>()
{
  return "server_demo::srv::Myimage_Request";
}

template<>
inline const char * name<server_demo::srv::Myimage_Request>()
{
  return "server_demo/srv/Myimage_Request";
}

template<>
struct has_fixed_size<server_demo::srv::Myimage_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<server_demo::srv::Myimage_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<server_demo::srv::Myimage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'server_image'
// already included above
// #include "sensor_msgs/msg/detail/image__traits.hpp"

namespace server_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const Myimage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: server_image
  {
    out << "server_image: ";
    to_flow_style_yaml(msg.server_image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Myimage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: server_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_image:\n";
    to_block_style_yaml(msg.server_image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Myimage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace server_demo

namespace rosidl_generator_traits
{

[[deprecated("use server_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const server_demo::srv::Myimage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  server_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use server_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const server_demo::srv::Myimage_Response & msg)
{
  return server_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<server_demo::srv::Myimage_Response>()
{
  return "server_demo::srv::Myimage_Response";
}

template<>
inline const char * name<server_demo::srv::Myimage_Response>()
{
  return "server_demo/srv/Myimage_Response";
}

template<>
struct has_fixed_size<server_demo::srv::Myimage_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<server_demo::srv::Myimage_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<server_demo::srv::Myimage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<server_demo::srv::Myimage>()
{
  return "server_demo::srv::Myimage";
}

template<>
inline const char * name<server_demo::srv::Myimage>()
{
  return "server_demo/srv/Myimage";
}

template<>
struct has_fixed_size<server_demo::srv::Myimage>
  : std::integral_constant<
    bool,
    has_fixed_size<server_demo::srv::Myimage_Request>::value &&
    has_fixed_size<server_demo::srv::Myimage_Response>::value
  >
{
};

template<>
struct has_bounded_size<server_demo::srv::Myimage>
  : std::integral_constant<
    bool,
    has_bounded_size<server_demo::srv::Myimage_Request>::value &&
    has_bounded_size<server_demo::srv::Myimage_Response>::value
  >
{
};

template<>
struct is_service<server_demo::srv::Myimage>
  : std::true_type
{
};

template<>
struct is_service_request<server_demo::srv::Myimage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<server_demo::srv::Myimage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVER_DEMO__SRV__DETAIL__MYIMAGE__TRAITS_HPP_
