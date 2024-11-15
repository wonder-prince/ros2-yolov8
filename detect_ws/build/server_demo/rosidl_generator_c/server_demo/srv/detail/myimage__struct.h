// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from server_demo:srv/Myimage.idl
// generated code does not contain a copyright notice

#ifndef SERVER_DEMO__SRV__DETAIL__MYIMAGE__STRUCT_H_
#define SERVER_DEMO__SRV__DETAIL__MYIMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'client_image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/Myimage in the package server_demo.
typedef struct server_demo__srv__Myimage_Request
{
  sensor_msgs__msg__Image client_image;
} server_demo__srv__Myimage_Request;

// Struct for a sequence of server_demo__srv__Myimage_Request.
typedef struct server_demo__srv__Myimage_Request__Sequence
{
  server_demo__srv__Myimage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} server_demo__srv__Myimage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'server_image'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/Myimage in the package server_demo.
typedef struct server_demo__srv__Myimage_Response
{
  sensor_msgs__msg__Image server_image;
} server_demo__srv__Myimage_Response;

// Struct for a sequence of server_demo__srv__Myimage_Response.
typedef struct server_demo__srv__Myimage_Response__Sequence
{
  server_demo__srv__Myimage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} server_demo__srv__Myimage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVER_DEMO__SRV__DETAIL__MYIMAGE__STRUCT_H_
