// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from server_demo:srv/Myimage.idl
// generated code does not contain a copyright notice
#include "server_demo/srv/detail/myimage__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "server_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "server_demo/srv/detail/myimage__struct.h"
#include "server_demo/srv/detail/myimage__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/image__functions.h"  // client_image

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_server_demo
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_server_demo
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_server_demo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _Myimage_Request__ros_msg_type = server_demo__srv__Myimage_Request;

static bool _Myimage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Myimage_Request__ros_msg_type * ros_message = static_cast<const _Myimage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: client_image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->client_image, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Myimage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Myimage_Request__ros_msg_type * ros_message = static_cast<_Myimage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: client_image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->client_image))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_server_demo
size_t get_serialized_size_server_demo__srv__Myimage_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Myimage_Request__ros_msg_type * ros_message = static_cast<const _Myimage_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name client_image

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->client_image), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Myimage_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_server_demo__srv__Myimage_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_server_demo
size_t max_serialized_size_server_demo__srv__Myimage_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: client_image
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = server_demo__srv__Myimage_Request;
    is_plain =
      (
      offsetof(DataType, client_image) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Myimage_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_server_demo__srv__Myimage_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Myimage_Request = {
  "server_demo::srv",
  "Myimage_Request",
  _Myimage_Request__cdr_serialize,
  _Myimage_Request__cdr_deserialize,
  _Myimage_Request__get_serialized_size,
  _Myimage_Request__max_serialized_size
};

static rosidl_message_type_support_t _Myimage_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Myimage_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, server_demo, srv, Myimage_Request)() {
  return &_Myimage_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "server_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "server_demo/srv/detail/myimage__struct.h"
// already included above
// #include "server_demo/srv/detail/myimage__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "sensor_msgs/msg/detail/image__functions.h"  // server_image

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_server_demo
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_server_demo
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_server_demo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _Myimage_Response__ros_msg_type = server_demo__srv__Myimage_Response;

static bool _Myimage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Myimage_Response__ros_msg_type * ros_message = static_cast<const _Myimage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: server_image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->server_image, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Myimage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Myimage_Response__ros_msg_type * ros_message = static_cast<_Myimage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: server_image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->server_image))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_server_demo
size_t get_serialized_size_server_demo__srv__Myimage_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Myimage_Response__ros_msg_type * ros_message = static_cast<const _Myimage_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name server_image

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->server_image), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Myimage_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_server_demo__srv__Myimage_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_server_demo
size_t max_serialized_size_server_demo__srv__Myimage_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: server_image
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = server_demo__srv__Myimage_Response;
    is_plain =
      (
      offsetof(DataType, server_image) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Myimage_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_server_demo__srv__Myimage_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Myimage_Response = {
  "server_demo::srv",
  "Myimage_Response",
  _Myimage_Response__cdr_serialize,
  _Myimage_Response__cdr_deserialize,
  _Myimage_Response__get_serialized_size,
  _Myimage_Response__max_serialized_size
};

static rosidl_message_type_support_t _Myimage_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Myimage_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, server_demo, srv, Myimage_Response)() {
  return &_Myimage_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "server_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "server_demo/srv/myimage.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Myimage__callbacks = {
  "server_demo::srv",
  "Myimage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, server_demo, srv, Myimage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, server_demo, srv, Myimage_Response)(),
};

static rosidl_service_type_support_t Myimage__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Myimage__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, server_demo, srv, Myimage)() {
  return &Myimage__handle;
}

#if defined(__cplusplus)
}
#endif
