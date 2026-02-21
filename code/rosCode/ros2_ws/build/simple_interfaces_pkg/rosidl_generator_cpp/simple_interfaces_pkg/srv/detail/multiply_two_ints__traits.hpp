// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_interfaces_pkg:srv/MultiplyTwoInts.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES_PKG__SRV__DETAIL__MULTIPLY_TWO_INTS__TRAITS_HPP_
#define SIMPLE_INTERFACES_PKG__SRV__DETAIL__MULTIPLY_TWO_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_interfaces_pkg/srv/detail/multiply_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_interfaces_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const MultiplyTwoInts_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MultiplyTwoInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MultiplyTwoInts_Request & msg, bool use_flow_style = false)
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

}  // namespace simple_interfaces_pkg

namespace rosidl_generator_traits
{

[[deprecated("use simple_interfaces_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_interfaces_pkg::srv::MultiplyTwoInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_interfaces_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_interfaces_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_interfaces_pkg::srv::MultiplyTwoInts_Request & msg)
{
  return simple_interfaces_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_interfaces_pkg::srv::MultiplyTwoInts_Request>()
{
  return "simple_interfaces_pkg::srv::MultiplyTwoInts_Request";
}

template<>
inline const char * name<simple_interfaces_pkg::srv::MultiplyTwoInts_Request>()
{
  return "simple_interfaces_pkg/srv/MultiplyTwoInts_Request";
}

template<>
struct has_fixed_size<simple_interfaces_pkg::srv::MultiplyTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simple_interfaces_pkg::srv::MultiplyTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simple_interfaces_pkg::srv::MultiplyTwoInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace simple_interfaces_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const MultiplyTwoInts_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MultiplyTwoInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MultiplyTwoInts_Response & msg, bool use_flow_style = false)
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

}  // namespace simple_interfaces_pkg

namespace rosidl_generator_traits
{

[[deprecated("use simple_interfaces_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_interfaces_pkg::srv::MultiplyTwoInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_interfaces_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_interfaces_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_interfaces_pkg::srv::MultiplyTwoInts_Response & msg)
{
  return simple_interfaces_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_interfaces_pkg::srv::MultiplyTwoInts_Response>()
{
  return "simple_interfaces_pkg::srv::MultiplyTwoInts_Response";
}

template<>
inline const char * name<simple_interfaces_pkg::srv::MultiplyTwoInts_Response>()
{
  return "simple_interfaces_pkg/srv/MultiplyTwoInts_Response";
}

template<>
struct has_fixed_size<simple_interfaces_pkg::srv::MultiplyTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simple_interfaces_pkg::srv::MultiplyTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simple_interfaces_pkg::srv::MultiplyTwoInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simple_interfaces_pkg::srv::MultiplyTwoInts>()
{
  return "simple_interfaces_pkg::srv::MultiplyTwoInts";
}

template<>
inline const char * name<simple_interfaces_pkg::srv::MultiplyTwoInts>()
{
  return "simple_interfaces_pkg/srv/MultiplyTwoInts";
}

template<>
struct has_fixed_size<simple_interfaces_pkg::srv::MultiplyTwoInts>
  : std::integral_constant<
    bool,
    has_fixed_size<simple_interfaces_pkg::srv::MultiplyTwoInts_Request>::value &&
    has_fixed_size<simple_interfaces_pkg::srv::MultiplyTwoInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<simple_interfaces_pkg::srv::MultiplyTwoInts>
  : std::integral_constant<
    bool,
    has_bounded_size<simple_interfaces_pkg::srv::MultiplyTwoInts_Request>::value &&
    has_bounded_size<simple_interfaces_pkg::srv::MultiplyTwoInts_Response>::value
  >
{
};

template<>
struct is_service<simple_interfaces_pkg::srv::MultiplyTwoInts>
  : std::true_type
{
};

template<>
struct is_service_request<simple_interfaces_pkg::srv::MultiplyTwoInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simple_interfaces_pkg::srv::MultiplyTwoInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_INTERFACES_PKG__SRV__DETAIL__MULTIPLY_TWO_INTS__TRAITS_HPP_
