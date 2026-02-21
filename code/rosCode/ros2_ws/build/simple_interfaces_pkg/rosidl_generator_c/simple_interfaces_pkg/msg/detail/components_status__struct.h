// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_interfaces_pkg:msg/ComponentsStatus.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__STRUCT_H_
#define SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'debug_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ComponentsStatus in the package simple_interfaces_pkg.
typedef struct simple_interfaces_pkg__msg__ComponentsStatus
{
  bool camera_on;
  bool lidar_on;
  bool motor_on;
  rosidl_runtime_c__String debug_msg;
} simple_interfaces_pkg__msg__ComponentsStatus;

// Struct for a sequence of simple_interfaces_pkg__msg__ComponentsStatus.
typedef struct simple_interfaces_pkg__msg__ComponentsStatus__Sequence
{
  simple_interfaces_pkg__msg__ComponentsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces_pkg__msg__ComponentsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__STRUCT_H_
