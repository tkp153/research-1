// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__MULTI_TRANSFORM__STRUCT_H_
#define MYMSG__MSG__DETAIL__MULTI_TRANSFORM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "mymsg/msg/detail/transform__struct.h"

// Struct defined in msg/MultiTransform in the package mymsg.
typedef struct mymsg__msg__MultiTransform
{
  mymsg__msg__Transform__Sequence transform;
} mymsg__msg__MultiTransform;

// Struct for a sequence of mymsg__msg__MultiTransform.
typedef struct mymsg__msg__MultiTransform__Sequence
{
  mymsg__msg__MultiTransform * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsg__msg__MultiTransform__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSG__MSG__DETAIL__MULTI_TRANSFORM__STRUCT_H_
