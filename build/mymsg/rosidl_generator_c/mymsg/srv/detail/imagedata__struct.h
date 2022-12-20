// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsg:srv/Imagedata.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__SRV__DETAIL__IMAGEDATA__STRUCT_H_
#define MYMSG__SRV__DETAIL__IMAGEDATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_data'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in srv/Imagedata in the package mymsg.
typedef struct mymsg__srv__Imagedata_Request
{
  sensor_msgs__msg__Image input_data;
  int64_t input_count;
} mymsg__srv__Imagedata_Request;

// Struct for a sequence of mymsg__srv__Imagedata_Request.
typedef struct mymsg__srv__Imagedata_Request__Sequence
{
  mymsg__srv__Imagedata_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsg__srv__Imagedata_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output_data'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in srv/Imagedata in the package mymsg.
typedef struct mymsg__srv__Imagedata_Response
{
  bool output_cut;
  int64_t output_count;
  sensor_msgs__msg__Image output_data;
} mymsg__srv__Imagedata_Response;

// Struct for a sequence of mymsg__srv__Imagedata_Response.
typedef struct mymsg__srv__Imagedata_Response__Sequence
{
  mymsg__srv__Imagedata_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsg__srv__Imagedata_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSG__SRV__DETAIL__IMAGEDATA__STRUCT_H_
