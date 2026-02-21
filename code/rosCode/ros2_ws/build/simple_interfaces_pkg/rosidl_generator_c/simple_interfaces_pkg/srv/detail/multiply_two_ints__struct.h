// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_interfaces_pkg:srv/MultiplyTwoInts.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES_PKG__SRV__DETAIL__MULTIPLY_TWO_INTS__STRUCT_H_
#define SIMPLE_INTERFACES_PKG__SRV__DETAIL__MULTIPLY_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MultiplyTwoInts in the package simple_interfaces_pkg.
typedef struct simple_interfaces_pkg__srv__MultiplyTwoInts_Request
{
  int64_t a;
  int64_t b;
} simple_interfaces_pkg__srv__MultiplyTwoInts_Request;

// Struct for a sequence of simple_interfaces_pkg__srv__MultiplyTwoInts_Request.
typedef struct simple_interfaces_pkg__srv__MultiplyTwoInts_Request__Sequence
{
  simple_interfaces_pkg__srv__MultiplyTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces_pkg__srv__MultiplyTwoInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MultiplyTwoInts in the package simple_interfaces_pkg.
typedef struct simple_interfaces_pkg__srv__MultiplyTwoInts_Response
{
  int64_t result;
} simple_interfaces_pkg__srv__MultiplyTwoInts_Response;

// Struct for a sequence of simple_interfaces_pkg__srv__MultiplyTwoInts_Response.
typedef struct simple_interfaces_pkg__srv__MultiplyTwoInts_Response__Sequence
{
  simple_interfaces_pkg__srv__MultiplyTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces_pkg__srv__MultiplyTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES_PKG__SRV__DETAIL__MULTIPLY_TWO_INTS__STRUCT_H_
