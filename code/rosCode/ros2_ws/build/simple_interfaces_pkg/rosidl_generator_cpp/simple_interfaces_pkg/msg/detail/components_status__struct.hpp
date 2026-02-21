// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_interfaces_pkg:msg/ComponentsStatus.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__STRUCT_HPP_
#define SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_interfaces_pkg__msg__ComponentsStatus __attribute__((deprecated))
#else
# define DEPRECATED__simple_interfaces_pkg__msg__ComponentsStatus __declspec(deprecated)
#endif

namespace simple_interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ComponentsStatus_
{
  using Type = ComponentsStatus_<ContainerAllocator>;

  explicit ComponentsStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_on = false;
      this->lidar_on = false;
      this->motor_on = false;
      this->debug_msg = "";
    }
  }

  explicit ComponentsStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_on = false;
      this->lidar_on = false;
      this->motor_on = false;
      this->debug_msg = "";
    }
  }

  // field types and members
  using _camera_on_type =
    bool;
  _camera_on_type camera_on;
  using _lidar_on_type =
    bool;
  _lidar_on_type lidar_on;
  using _motor_on_type =
    bool;
  _motor_on_type motor_on;
  using _debug_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _debug_msg_type debug_msg;

  // setters for named parameter idiom
  Type & set__camera_on(
    const bool & _arg)
  {
    this->camera_on = _arg;
    return *this;
  }
  Type & set__lidar_on(
    const bool & _arg)
  {
    this->lidar_on = _arg;
    return *this;
  }
  Type & set__motor_on(
    const bool & _arg)
  {
    this->motor_on = _arg;
    return *this;
  }
  Type & set__debug_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->debug_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_interfaces_pkg__msg__ComponentsStatus
    std::shared_ptr<simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_interfaces_pkg__msg__ComponentsStatus
    std::shared_ptr<simple_interfaces_pkg::msg::ComponentsStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComponentsStatus_ & other) const
  {
    if (this->camera_on != other.camera_on) {
      return false;
    }
    if (this->lidar_on != other.lidar_on) {
      return false;
    }
    if (this->motor_on != other.motor_on) {
      return false;
    }
    if (this->debug_msg != other.debug_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComponentsStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComponentsStatus_

// alias to use template instance with default allocator
using ComponentsStatus =
  simple_interfaces_pkg::msg::ComponentsStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simple_interfaces_pkg

#endif  // SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__STRUCT_HPP_
