// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_interfaces_pkg:msg/ComponentsStatus.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__TRAITS_HPP_
#define SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_interfaces_pkg/msg/detail/components_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_interfaces_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ComponentsStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_on
  {
    out << "camera_on: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_on, out);
    out << ", ";
  }

  // member: lidar_on
  {
    out << "lidar_on: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_on, out);
    out << ", ";
  }

  // member: motor_on
  {
    out << "motor_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_on, out);
    out << ", ";
  }

  // member: debug_msg
  {
    out << "debug_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComponentsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_on: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_on, out);
    out << "\n";
  }

  // member: lidar_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_on: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_on, out);
    out << "\n";
  }

  // member: motor_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_on, out);
    out << "\n";
  }

  // member: debug_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComponentsStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace simple_interfaces_pkg

namespace rosidl_generator_traits
{

[[deprecated("use simple_interfaces_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_interfaces_pkg::msg::ComponentsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_interfaces_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_interfaces_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const simple_interfaces_pkg::msg::ComponentsStatus & msg)
{
  return simple_interfaces_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simple_interfaces_pkg::msg::ComponentsStatus>()
{
  return "simple_interfaces_pkg::msg::ComponentsStatus";
}

template<>
inline const char * name<simple_interfaces_pkg::msg::ComponentsStatus>()
{
  return "simple_interfaces_pkg/msg/ComponentsStatus";
}

template<>
struct has_fixed_size<simple_interfaces_pkg::msg::ComponentsStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_interfaces_pkg::msg::ComponentsStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_interfaces_pkg::msg::ComponentsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__TRAITS_HPP_
