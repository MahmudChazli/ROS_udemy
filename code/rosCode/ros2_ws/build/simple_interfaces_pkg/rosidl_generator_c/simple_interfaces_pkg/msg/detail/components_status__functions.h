// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simple_interfaces_pkg:msg/ComponentsStatus.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__FUNCTIONS_H_
#define SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simple_interfaces_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "simple_interfaces_pkg/msg/detail/components_status__struct.h"

/// Initialize msg/ComponentsStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_interfaces_pkg__msg__ComponentsStatus
 * )) before or use
 * simple_interfaces_pkg__msg__ComponentsStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
bool
simple_interfaces_pkg__msg__ComponentsStatus__init(simple_interfaces_pkg__msg__ComponentsStatus * msg);

/// Finalize msg/ComponentsStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
void
simple_interfaces_pkg__msg__ComponentsStatus__fini(simple_interfaces_pkg__msg__ComponentsStatus * msg);

/// Create msg/ComponentsStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_interfaces_pkg__msg__ComponentsStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
simple_interfaces_pkg__msg__ComponentsStatus *
simple_interfaces_pkg__msg__ComponentsStatus__create();

/// Destroy msg/ComponentsStatus message.
/**
 * It calls
 * simple_interfaces_pkg__msg__ComponentsStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
void
simple_interfaces_pkg__msg__ComponentsStatus__destroy(simple_interfaces_pkg__msg__ComponentsStatus * msg);

/// Check for msg/ComponentsStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
bool
simple_interfaces_pkg__msg__ComponentsStatus__are_equal(const simple_interfaces_pkg__msg__ComponentsStatus * lhs, const simple_interfaces_pkg__msg__ComponentsStatus * rhs);

/// Copy a msg/ComponentsStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
bool
simple_interfaces_pkg__msg__ComponentsStatus__copy(
  const simple_interfaces_pkg__msg__ComponentsStatus * input,
  simple_interfaces_pkg__msg__ComponentsStatus * output);

/// Initialize array of msg/ComponentsStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_interfaces_pkg__msg__ComponentsStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
bool
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__init(simple_interfaces_pkg__msg__ComponentsStatus__Sequence * array, size_t size);

/// Finalize array of msg/ComponentsStatus messages.
/**
 * It calls
 * simple_interfaces_pkg__msg__ComponentsStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
void
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__fini(simple_interfaces_pkg__msg__ComponentsStatus__Sequence * array);

/// Create array of msg/ComponentsStatus messages.
/**
 * It allocates the memory for the array and calls
 * simple_interfaces_pkg__msg__ComponentsStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
simple_interfaces_pkg__msg__ComponentsStatus__Sequence *
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__create(size_t size);

/// Destroy array of msg/ComponentsStatus messages.
/**
 * It calls
 * simple_interfaces_pkg__msg__ComponentsStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
void
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__destroy(simple_interfaces_pkg__msg__ComponentsStatus__Sequence * array);

/// Check for msg/ComponentsStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
bool
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__are_equal(const simple_interfaces_pkg__msg__ComponentsStatus__Sequence * lhs, const simple_interfaces_pkg__msg__ComponentsStatus__Sequence * rhs);

/// Copy an array of msg/ComponentsStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces_pkg
bool
simple_interfaces_pkg__msg__ComponentsStatus__Sequence__copy(
  const simple_interfaces_pkg__msg__ComponentsStatus__Sequence * input,
  simple_interfaces_pkg__msg__ComponentsStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES_PKG__MSG__DETAIL__COMPONENTS_STATUS__FUNCTIONS_H_
