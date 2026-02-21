// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simple_interfaces_pkg:msg/ComponentsStatus.idl
// generated code does not contain a copyright notice
#include "simple_interfaces_pkg/msg/detail/components_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `debug_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
simple_interfaces_pkg__msg__ComponentsStatus__init(simple_interfaces_pkg__msg__ComponentsStatus * msg)
{
  if (!msg) {
    return false;
  }
  // camera_on
  // lidar_on
  // motor_on
  // debug_msg
  if (!rosidl_runtime_c__String__init(&msg->debug_msg)) {
    simple_interfaces_pkg__msg__ComponentsStatus__fini(msg);
    return false;
  }
  return true;
}

void
simple_interfaces_pkg__msg__ComponentsStatus__fini(simple_interfaces_pkg__msg__ComponentsStatus * msg)
{
  if (!msg) {
    return;
  }
  // camera_on
  // lidar_on
  // motor_on
  // debug_msg
  rosidl_runtime_c__String__fini(&msg->debug_msg);
}

bool
simple_interfaces_pkg__msg__ComponentsStatus__are_equal(const simple_interfaces_pkg__msg__ComponentsStatus * lhs, const simple_interfaces_pkg__msg__ComponentsStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_on
  if (lhs->camera_on != rhs->camera_on) {
    return false;
  }
  // lidar_on
  if (lhs->lidar_on != rhs->lidar_on) {
    return false;
  }
  // motor_on
  if (lhs->motor_on != rhs->motor_on) {
    return false;
  }
  // debug_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->debug_msg), &(rhs->debug_msg)))
  {
    return false;
  }
  return true;
}

bool
simple_interfaces_pkg__msg__ComponentsStatus__copy(
  const simple_interfaces_pkg__msg__ComponentsStatus * input,
  simple_interfaces_pkg__msg__ComponentsStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_on
  output->camera_on = input->camera_on;
  // lidar_on
  output->lidar_on = input->lidar_on;
  // motor_on
  output->motor_on = input->motor_on;
  // debug_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->debug_msg), &(output->debug_msg)))
  {
    return false;
  }
  return true;
}

simple_interfaces_pkg__msg__ComponentsStatus *
simple_interfaces_pkg__msg__ComponentsStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces_pkg__msg__ComponentsStatus * msg = (simple_interfaces_pkg__msg__ComponentsStatus *)allocator.allocate(sizeof(simple_interfaces_pkg__msg__ComponentsStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_interfaces_pkg__msg__ComponentsStatus));
  bool success = simple_interfaces_pkg__msg__ComponentsStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simple_interfaces_pkg__msg__ComponentsStatus__destroy(simple_interfaces_pkg__msg__ComponentsStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simple_interfaces_pkg__msg__ComponentsStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__init(simple_interfaces_pkg__msg__ComponentsStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces_pkg__msg__ComponentsStatus * data = NULL;

  if (size) {
    data = (simple_interfaces_pkg__msg__ComponentsStatus *)allocator.zero_allocate(size, sizeof(simple_interfaces_pkg__msg__ComponentsStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_interfaces_pkg__msg__ComponentsStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_interfaces_pkg__msg__ComponentsStatus__fini(&data[i - 1]);
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
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__fini(simple_interfaces_pkg__msg__ComponentsStatus__Sequence * array)
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
      simple_interfaces_pkg__msg__ComponentsStatus__fini(&array->data[i]);
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

simple_interfaces_pkg__msg__ComponentsStatus__Sequence *
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces_pkg__msg__ComponentsStatus__Sequence * array = (simple_interfaces_pkg__msg__ComponentsStatus__Sequence *)allocator.allocate(sizeof(simple_interfaces_pkg__msg__ComponentsStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simple_interfaces_pkg__msg__ComponentsStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__destroy(simple_interfaces_pkg__msg__ComponentsStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simple_interfaces_pkg__msg__ComponentsStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__are_equal(const simple_interfaces_pkg__msg__ComponentsStatus__Sequence * lhs, const simple_interfaces_pkg__msg__ComponentsStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simple_interfaces_pkg__msg__ComponentsStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__copy(
  const simple_interfaces_pkg__msg__ComponentsStatus__Sequence * input,
  simple_interfaces_pkg__msg__ComponentsStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simple_interfaces_pkg__msg__ComponentsStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simple_interfaces_pkg__msg__ComponentsStatus * data =
      (simple_interfaces_pkg__msg__ComponentsStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simple_interfaces_pkg__msg__ComponentsStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simple_interfaces_pkg__msg__ComponentsStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simple_interfaces_pkg__msg__ComponentsStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
