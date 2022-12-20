// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mymsg:msg/Pose.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mymsg/msg/pose__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mymsg/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mymsg/msg/detail/pose__struct.h"
#include "mymsg/msg/detail/pose__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mymsg/msg/dds_connext/Pose_Support.h"
#include "mymsg/msg/dds_connext/Pose_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'keypoints'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'keypoints'
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// forward declare type support functions

static DDS_TypeCode *
_Pose__get_type_code()
{
  return mymsg::msg::dds_::Pose_TypeSupport::get_typecode();
}

static bool
_Pose__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mymsg__msg__Pose * ros_message =
    static_cast<const mymsg__msg__Pose *>(untyped_ros_message);
  mymsg::msg::dds_::Pose_ * dds_message =
    static_cast<mymsg::msg::dds_::Pose_ *>(untyped_dds_message);
  // Member name: keypoints
  {
    size_t size = ros_message->keypoints.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->keypoints_.maximum()) {
      if (!dds_message->keypoints_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->keypoints_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->keypoints.data[i];
      dds_message->keypoints_[i] = ros_i;
    }
  }
  return true;
}

static bool
_Pose__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mymsg::msg::dds_::Pose_ * dds_message =
    static_cast<const mymsg::msg::dds_::Pose_ *>(untyped_dds_message);
  mymsg__msg__Pose * ros_message =
    static_cast<mymsg__msg__Pose *>(untyped_ros_message);
  // Member name: keypoints
  {
    DDS_Long size = dds_message->keypoints_.length();
    if (ros_message->keypoints.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->keypoints);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->keypoints, size)) {
      return "failed to create array for field 'keypoints'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->keypoints.data[i];
      ros_i = dds_message->keypoints_[i];
    }
  }
  return true;
}


static bool
_Pose__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mymsg__msg__Pose * ros_message =
    static_cast<const mymsg__msg__Pose *>(untyped_ros_message);
  mymsg::msg::dds_::Pose_ dds_message;
  if (!_Pose__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mymsg::msg::dds_::Pose_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mymsg::msg::dds_::Pose_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (mymsg::msg::dds_::Pose_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_Pose__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mymsg::msg::dds_::Pose_ * dds_message =
    mymsg::msg::dds_::Pose_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mymsg::msg::dds_::Pose_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Pose__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mymsg::msg::dds_::Pose_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Pose__callbacks = {
  "mymsg::msg",  // message_namespace
  "Pose",  // message_name
  _Pose__get_type_code,  // get_type_code
  _Pose__convert_ros_to_dds,  // convert_ros_to_dds
  _Pose__convert_dds_to_ros,  // convert_dds_to_ros
  _Pose__to_cdr_stream,  // to_cdr_stream
  _Pose__to_message  // to_message
};

static rosidl_message_type_support_t _Pose__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Pose__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mymsg, msg,
  Pose)()
{
  return &_Pose__type_support;
}

#if defined(__cplusplus)
}
#endif
