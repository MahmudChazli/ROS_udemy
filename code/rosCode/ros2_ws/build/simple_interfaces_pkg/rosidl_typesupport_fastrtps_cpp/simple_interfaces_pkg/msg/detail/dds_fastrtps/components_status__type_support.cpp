// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from simple_interfaces_pkg:msg/ComponentsStatus.idl
// generated code does not contain a copyright notice
#include "simple_interfaces_pkg/msg/detail/components_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "simple_interfaces_pkg/msg/detail/components_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace simple_interfaces_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interfaces_pkg
cdr_serialize(
  const simple_interfaces_pkg::msg::ComponentsStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: camera_on
  cdr << (ros_message.camera_on ? true : false);
  // Member: lidar_on
  cdr << (ros_message.lidar_on ? true : false);
  // Member: motor_on
  cdr << (ros_message.motor_on ? true : false);
  // Member: debug_msg
  cdr << ros_message.debug_msg;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interfaces_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  simple_interfaces_pkg::msg::ComponentsStatus & ros_message)
{
  // Member: camera_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.camera_on = tmp ? true : false;
  }

  // Member: lidar_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lidar_on = tmp ? true : false;
  }

  // Member: motor_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motor_on = tmp ? true : false;
  }

  // Member: debug_msg
  cdr >> ros_message.debug_msg;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interfaces_pkg
get_serialized_size(
  const simple_interfaces_pkg::msg::ComponentsStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: camera_on
  {
    size_t item_size = sizeof(ros_message.camera_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lidar_on
  {
    size_t item_size = sizeof(ros_message.lidar_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_on
  {
    size_t item_size = sizeof(ros_message.motor_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debug_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.debug_msg.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interfaces_pkg
max_serialized_size_ComponentsStatus(
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


  // Member: camera_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lidar_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: debug_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = simple_interfaces_pkg::msg::ComponentsStatus;
    is_plain =
      (
      offsetof(DataType, debug_msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ComponentsStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const simple_interfaces_pkg::msg::ComponentsStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ComponentsStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<simple_interfaces_pkg::msg::ComponentsStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ComponentsStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const simple_interfaces_pkg::msg::ComponentsStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ComponentsStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ComponentsStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ComponentsStatus__callbacks = {
  "simple_interfaces_pkg::msg",
  "ComponentsStatus",
  _ComponentsStatus__cdr_serialize,
  _ComponentsStatus__cdr_deserialize,
  _ComponentsStatus__get_serialized_size,
  _ComponentsStatus__max_serialized_size
};

static rosidl_message_type_support_t _ComponentsStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ComponentsStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace simple_interfaces_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_simple_interfaces_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<simple_interfaces_pkg::msg::ComponentsStatus>()
{
  return &simple_interfaces_pkg::msg::typesupport_fastrtps_cpp::_ComponentsStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simple_interfaces_pkg, msg, ComponentsStatus)() {
  return &simple_interfaces_pkg::msg::typesupport_fastrtps_cpp::_ComponentsStatus__handle;
}

#ifdef __cplusplus
}
#endif
