// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from server_demo:srv/Myimage.idl
// generated code does not contain a copyright notice

#ifndef SERVER_DEMO__SRV__DETAIL__MYIMAGE__STRUCT_HPP_
#define SERVER_DEMO__SRV__DETAIL__MYIMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'client_image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__server_demo__srv__Myimage_Request __attribute__((deprecated))
#else
# define DEPRECATED__server_demo__srv__Myimage_Request __declspec(deprecated)
#endif

namespace server_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Myimage_Request_
{
  using Type = Myimage_Request_<ContainerAllocator>;

  explicit Myimage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : client_image(_init)
  {
    (void)_init;
  }

  explicit Myimage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : client_image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _client_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _client_image_type client_image;

  // setters for named parameter idiom
  Type & set__client_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->client_image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    server_demo::srv::Myimage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const server_demo::srv::Myimage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<server_demo::srv::Myimage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<server_demo::srv::Myimage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      server_demo::srv::Myimage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<server_demo::srv::Myimage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      server_demo::srv::Myimage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<server_demo::srv::Myimage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<server_demo::srv::Myimage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<server_demo::srv::Myimage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__server_demo__srv__Myimage_Request
    std::shared_ptr<server_demo::srv::Myimage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__server_demo__srv__Myimage_Request
    std::shared_ptr<server_demo::srv::Myimage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Myimage_Request_ & other) const
  {
    if (this->client_image != other.client_image) {
      return false;
    }
    return true;
  }
  bool operator!=(const Myimage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Myimage_Request_

// alias to use template instance with default allocator
using Myimage_Request =
  server_demo::srv::Myimage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace server_demo


// Include directives for member types
// Member 'server_image'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__server_demo__srv__Myimage_Response __attribute__((deprecated))
#else
# define DEPRECATED__server_demo__srv__Myimage_Response __declspec(deprecated)
#endif

namespace server_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Myimage_Response_
{
  using Type = Myimage_Response_<ContainerAllocator>;

  explicit Myimage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : server_image(_init)
  {
    (void)_init;
  }

  explicit Myimage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : server_image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _server_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _server_image_type server_image;

  // setters for named parameter idiom
  Type & set__server_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->server_image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    server_demo::srv::Myimage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const server_demo::srv::Myimage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<server_demo::srv::Myimage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<server_demo::srv::Myimage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      server_demo::srv::Myimage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<server_demo::srv::Myimage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      server_demo::srv::Myimage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<server_demo::srv::Myimage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<server_demo::srv::Myimage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<server_demo::srv::Myimage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__server_demo__srv__Myimage_Response
    std::shared_ptr<server_demo::srv::Myimage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__server_demo__srv__Myimage_Response
    std::shared_ptr<server_demo::srv::Myimage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Myimage_Response_ & other) const
  {
    if (this->server_image != other.server_image) {
      return false;
    }
    return true;
  }
  bool operator!=(const Myimage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Myimage_Response_

// alias to use template instance with default allocator
using Myimage_Response =
  server_demo::srv::Myimage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace server_demo

namespace server_demo
{

namespace srv
{

struct Myimage
{
  using Request = server_demo::srv::Myimage_Request;
  using Response = server_demo::srv::Myimage_Response;
};

}  // namespace srv

}  // namespace server_demo

#endif  // SERVER_DEMO__SRV__DETAIL__MYIMAGE__STRUCT_HPP_
