// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsg:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__POSE__STRUCT_H_
#define MYMSG__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'keypoints'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Pose in the package mymsg.
typedef struct mymsg__msg__Pose
{
  rosidl_runtime_c__float__Sequence keypoints;
} mymsg__msg__Pose;

// Struct for a sequence of mymsg__msg__Pose.
typedef struct mymsg__msg__Pose__Sequence
{
  mymsg__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsg__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSG__MSG__DETAIL__POSE__STRUCT_H_
