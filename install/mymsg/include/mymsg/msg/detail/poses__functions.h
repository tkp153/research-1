// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mymsg:msg/Poses.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__POSES__FUNCTIONS_H_
#define MYMSG__MSG__DETAIL__POSES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mymsg/msg/rosidl_generator_c__visibility_control.h"

#include "mymsg/msg/detail/poses__struct.h"

/// Initialize msg/Poses message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mymsg__msg__Poses
 * )) before or use
 * mymsg__msg__Poses__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
bool
mymsg__msg__Poses__init(mymsg__msg__Poses * msg);

/// Finalize msg/Poses message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
void
mymsg__msg__Poses__fini(mymsg__msg__Poses * msg);

/// Create msg/Poses message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mymsg__msg__Poses__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
mymsg__msg__Poses *
mymsg__msg__Poses__create();

/// Destroy msg/Poses message.
/**
 * It calls
 * mymsg__msg__Poses__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
void
mymsg__msg__Poses__destroy(mymsg__msg__Poses * msg);

/// Check for msg/Poses message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
bool
mymsg__msg__Poses__are_equal(const mymsg__msg__Poses * lhs, const mymsg__msg__Poses * rhs);

/// Copy a msg/Poses message.
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
ROSIDL_GENERATOR_C_PUBLIC_mymsg
bool
mymsg__msg__Poses__copy(
  const mymsg__msg__Poses * input,
  mymsg__msg__Poses * output);

/// Initialize array of msg/Poses messages.
/**
 * It allocates the memory for the number of elements and calls
 * mymsg__msg__Poses__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
bool
mymsg__msg__Poses__Sequence__init(mymsg__msg__Poses__Sequence * array, size_t size);

/// Finalize array of msg/Poses messages.
/**
 * It calls
 * mymsg__msg__Poses__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
void
mymsg__msg__Poses__Sequence__fini(mymsg__msg__Poses__Sequence * array);

/// Create array of msg/Poses messages.
/**
 * It allocates the memory for the array and calls
 * mymsg__msg__Poses__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
mymsg__msg__Poses__Sequence *
mymsg__msg__Poses__Sequence__create(size_t size);

/// Destroy array of msg/Poses messages.
/**
 * It calls
 * mymsg__msg__Poses__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
void
mymsg__msg__Poses__Sequence__destroy(mymsg__msg__Poses__Sequence * array);

/// Check for msg/Poses message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mymsg
bool
mymsg__msg__Poses__Sequence__are_equal(const mymsg__msg__Poses__Sequence * lhs, const mymsg__msg__Poses__Sequence * rhs);

/// Copy an array of msg/Poses messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mymsg
bool
mymsg__msg__Poses__Sequence__copy(
  const mymsg__msg__Poses__Sequence * input,
  mymsg__msg__Poses__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MYMSG__MSG__DETAIL__POSES__FUNCTIONS_H_
