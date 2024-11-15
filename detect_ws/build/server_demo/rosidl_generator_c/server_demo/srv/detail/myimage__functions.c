// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from server_demo:srv/Myimage.idl
// generated code does not contain a copyright notice
#include "server_demo/srv/detail/myimage__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `client_image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
server_demo__srv__Myimage_Request__init(server_demo__srv__Myimage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // client_image
  if (!sensor_msgs__msg__Image__init(&msg->client_image)) {
    server_demo__srv__Myimage_Request__fini(msg);
    return false;
  }
  return true;
}

void
server_demo__srv__Myimage_Request__fini(server_demo__srv__Myimage_Request * msg)
{
  if (!msg) {
    return;
  }
  // client_image
  sensor_msgs__msg__Image__fini(&msg->client_image);
}

bool
server_demo__srv__Myimage_Request__are_equal(const server_demo__srv__Myimage_Request * lhs, const server_demo__srv__Myimage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // client_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->client_image), &(rhs->client_image)))
  {
    return false;
  }
  return true;
}

bool
server_demo__srv__Myimage_Request__copy(
  const server_demo__srv__Myimage_Request * input,
  server_demo__srv__Myimage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // client_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->client_image), &(output->client_image)))
  {
    return false;
  }
  return true;
}

server_demo__srv__Myimage_Request *
server_demo__srv__Myimage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_demo__srv__Myimage_Request * msg = (server_demo__srv__Myimage_Request *)allocator.allocate(sizeof(server_demo__srv__Myimage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(server_demo__srv__Myimage_Request));
  bool success = server_demo__srv__Myimage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
server_demo__srv__Myimage_Request__destroy(server_demo__srv__Myimage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    server_demo__srv__Myimage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
server_demo__srv__Myimage_Request__Sequence__init(server_demo__srv__Myimage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_demo__srv__Myimage_Request * data = NULL;

  if (size) {
    data = (server_demo__srv__Myimage_Request *)allocator.zero_allocate(size, sizeof(server_demo__srv__Myimage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = server_demo__srv__Myimage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        server_demo__srv__Myimage_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
server_demo__srv__Myimage_Request__Sequence__fini(server_demo__srv__Myimage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      server_demo__srv__Myimage_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

server_demo__srv__Myimage_Request__Sequence *
server_demo__srv__Myimage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_demo__srv__Myimage_Request__Sequence * array = (server_demo__srv__Myimage_Request__Sequence *)allocator.allocate(sizeof(server_demo__srv__Myimage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = server_demo__srv__Myimage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
server_demo__srv__Myimage_Request__Sequence__destroy(server_demo__srv__Myimage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    server_demo__srv__Myimage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
server_demo__srv__Myimage_Request__Sequence__are_equal(const server_demo__srv__Myimage_Request__Sequence * lhs, const server_demo__srv__Myimage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!server_demo__srv__Myimage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
server_demo__srv__Myimage_Request__Sequence__copy(
  const server_demo__srv__Myimage_Request__Sequence * input,
  server_demo__srv__Myimage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(server_demo__srv__Myimage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    server_demo__srv__Myimage_Request * data =
      (server_demo__srv__Myimage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!server_demo__srv__Myimage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          server_demo__srv__Myimage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!server_demo__srv__Myimage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `server_image`
// already included above
// #include "sensor_msgs/msg/detail/image__functions.h"

bool
server_demo__srv__Myimage_Response__init(server_demo__srv__Myimage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // server_image
  if (!sensor_msgs__msg__Image__init(&msg->server_image)) {
    server_demo__srv__Myimage_Response__fini(msg);
    return false;
  }
  return true;
}

void
server_demo__srv__Myimage_Response__fini(server_demo__srv__Myimage_Response * msg)
{
  if (!msg) {
    return;
  }
  // server_image
  sensor_msgs__msg__Image__fini(&msg->server_image);
}

bool
server_demo__srv__Myimage_Response__are_equal(const server_demo__srv__Myimage_Response * lhs, const server_demo__srv__Myimage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // server_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->server_image), &(rhs->server_image)))
  {
    return false;
  }
  return true;
}

bool
server_demo__srv__Myimage_Response__copy(
  const server_demo__srv__Myimage_Response * input,
  server_demo__srv__Myimage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // server_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->server_image), &(output->server_image)))
  {
    return false;
  }
  return true;
}

server_demo__srv__Myimage_Response *
server_demo__srv__Myimage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_demo__srv__Myimage_Response * msg = (server_demo__srv__Myimage_Response *)allocator.allocate(sizeof(server_demo__srv__Myimage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(server_demo__srv__Myimage_Response));
  bool success = server_demo__srv__Myimage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
server_demo__srv__Myimage_Response__destroy(server_demo__srv__Myimage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    server_demo__srv__Myimage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
server_demo__srv__Myimage_Response__Sequence__init(server_demo__srv__Myimage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_demo__srv__Myimage_Response * data = NULL;

  if (size) {
    data = (server_demo__srv__Myimage_Response *)allocator.zero_allocate(size, sizeof(server_demo__srv__Myimage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = server_demo__srv__Myimage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        server_demo__srv__Myimage_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
server_demo__srv__Myimage_Response__Sequence__fini(server_demo__srv__Myimage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      server_demo__srv__Myimage_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

server_demo__srv__Myimage_Response__Sequence *
server_demo__srv__Myimage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  server_demo__srv__Myimage_Response__Sequence * array = (server_demo__srv__Myimage_Response__Sequence *)allocator.allocate(sizeof(server_demo__srv__Myimage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = server_demo__srv__Myimage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
server_demo__srv__Myimage_Response__Sequence__destroy(server_demo__srv__Myimage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    server_demo__srv__Myimage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
server_demo__srv__Myimage_Response__Sequence__are_equal(const server_demo__srv__Myimage_Response__Sequence * lhs, const server_demo__srv__Myimage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!server_demo__srv__Myimage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
server_demo__srv__Myimage_Response__Sequence__copy(
  const server_demo__srv__Myimage_Response__Sequence * input,
  server_demo__srv__Myimage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(server_demo__srv__Myimage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    server_demo__srv__Myimage_Response * data =
      (server_demo__srv__Myimage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!server_demo__srv__Myimage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          server_demo__srv__Myimage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!server_demo__srv__Myimage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
