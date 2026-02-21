// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simple_interfaces_pkg:msg/ComponentsStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simple_interfaces_pkg/msg/detail/components_status__rosidl_typesupport_introspection_c.h"
#include "simple_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simple_interfaces_pkg/msg/detail/components_status__functions.h"
#include "simple_interfaces_pkg/msg/detail/components_status__struct.h"


// Include directives for member types
// Member `debug_msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simple_interfaces_pkg__msg__ComponentsStatus__init(message_memory);
}

void simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_fini_function(void * message_memory)
{
  simple_interfaces_pkg__msg__ComponentsStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_message_member_array[4] = {
  {
    "camera_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_interfaces_pkg__msg__ComponentsStatus, camera_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lidar_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_interfaces_pkg__msg__ComponentsStatus, lidar_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_interfaces_pkg__msg__ComponentsStatus, motor_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "debug_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_interfaces_pkg__msg__ComponentsStatus, debug_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_message_members = {
  "simple_interfaces_pkg__msg",  // message namespace
  "ComponentsStatus",  // message name
  4,  // number of fields
  sizeof(simple_interfaces_pkg__msg__ComponentsStatus),
  simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_message_member_array,  // message members
  simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_message_type_support_handle = {
  0,
  &simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_interfaces_pkg, msg, ComponentsStatus)() {
  if (!simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_message_type_support_handle.typesupport_identifier) {
    simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simple_interfaces_pkg__msg__ComponentsStatus__rosidl_typesupport_introspection_c__ComponentsStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
