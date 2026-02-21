// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_interfaces_pkg:srv/MultiplyTwoInts.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES_PKG__SRV__DETAIL__MULTIPLY_TWO_INTS__BUILDER_HPP_
#define SIMPLE_INTERFACES_PKG__SRV__DETAIL__MULTIPLY_TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_interfaces_pkg/srv/detail/multiply_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_interfaces_pkg
{

namespace srv
{

namespace builder
{

class Init_MultiplyTwoInts_Request_b
{
public:
  explicit Init_MultiplyTwoInts_Request_b(::simple_interfaces_pkg::srv::MultiplyTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::simple_interfaces_pkg::srv::MultiplyTwoInts_Request b(::simple_interfaces_pkg::srv::MultiplyTwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces_pkg::srv::MultiplyTwoInts_Request msg_;
};

class Init_MultiplyTwoInts_Request_a
{
public:
  Init_MultiplyTwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiplyTwoInts_Request_b a(::simple_interfaces_pkg::srv::MultiplyTwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_MultiplyTwoInts_Request_b(msg_);
  }

private:
  ::simple_interfaces_pkg::srv::MultiplyTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces_pkg::srv::MultiplyTwoInts_Request>()
{
  return simple_interfaces_pkg::srv::builder::Init_MultiplyTwoInts_Request_a();
}

}  // namespace simple_interfaces_pkg


namespace simple_interfaces_pkg
{

namespace srv
{

namespace builder
{

class Init_MultiplyTwoInts_Response_result
{
public:
  Init_MultiplyTwoInts_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simple_interfaces_pkg::srv::MultiplyTwoInts_Response result(::simple_interfaces_pkg::srv::MultiplyTwoInts_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces_pkg::srv::MultiplyTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces_pkg::srv::MultiplyTwoInts_Response>()
{
  return simple_interfaces_pkg::srv::builder::Init_MultiplyTwoInts_Response_result();
}

}  // namespace simple_interfaces_pkg

#endif  // SIMPLE_INTERFACES_PKG__SRV__DETAIL__MULTIPLY_TWO_INTS__BUILDER_HPP_
