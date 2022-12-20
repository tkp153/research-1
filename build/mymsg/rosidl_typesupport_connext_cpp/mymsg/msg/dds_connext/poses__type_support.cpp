// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mymsg:msg/Poses.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mymsg/msg/poses__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace dds_
{
class Header_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const std_msgs::msg::Header &,
  std_msgs::msg::dds_::Header_ &);
bool convert_dds_message_to_ros(
  const std_msgs::msg::dds_::Header_ &,
  std_msgs::msg::Header &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace std_msgs
namespace mymsg
{
namespace msg
{
namespace dds_
{
class Pose_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const mymsg::msg::Pose &,
  mymsg::msg::dds_::Pose_ &);
bool convert_dds_message_to_ros(
  const mymsg::msg::dds_::Pose_ &,
  mymsg::msg::Pose &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace mymsg


namespace mymsg
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Poses()
{
  return mymsg::msg::dds_::Poses_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mymsg::msg::Poses & ros_message,
  mymsg::msg::dds_::Poses_ & dds_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.header,
      dds_message.header_))
  {
    return false;
  }

  // member.name poses
  {
    size_t size = ros_message.poses.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.poses_.maximum()) {
      if (!dds_message.poses_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.poses_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      if (
        !mymsg::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
          ros_message.poses[i],
          dds_message.poses_[static_cast<DDS_Long>(i)]))
      {
        return false;
      }
    }
  }

  // member.name id
  {
    size_t size = ros_message.id.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.id_.maximum()) {
      if (!dds_message.id_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.id_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      DDS_String_free(dds_message.id_[static_cast<DDS_Long>(i)]);
      dds_message.id_[static_cast<DDS_Long>(i)] =
        DDS_String_dup(ros_message.id[i].c_str());
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const mymsg::msg::dds_::Poses_ & dds_message,
  mymsg::msg::Poses & ros_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.header_,
      ros_message.header))
  {
    return false;
  }

  // member.name poses
  {
    size_t size = dds_message.poses_.length();
    ros_message.poses.resize(size);
    for (size_t i = 0; i < size; i++) {
      if (
        !mymsg::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
          dds_message.poses_[static_cast<DDS_Long>(i)],
          ros_message.poses[i]))
      {
        return false;
      }
    }
  }

  // member.name id
  {
    size_t size = dds_message.id_.length();
    ros_message.id.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.id[i] =
        dds_message.id_[static_cast<DDS_Long>(i)];
    }
  }

  return true;
}

bool
to_cdr_stream__Poses(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const mymsg::msg::Poses & ros_message =
    *(const mymsg::msg::Poses *)untyped_ros_message;

  // create a respective connext dds type
  mymsg::msg::dds_::Poses_ * dds_message = mymsg::msg::dds_::Poses_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mymsg::msg::dds_::Poses_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mymsg::msg::dds_::Poses_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mymsg::msg::dds_::Poses_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mymsg::msg::dds_::Poses_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Poses(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  mymsg::msg::dds_::Poses_ * dds_message =
    mymsg::msg::dds_::Poses_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mymsg::msg::dds_::Poses_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mymsg::msg::Poses & ros_message =
    *(mymsg::msg::Poses *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mymsg::msg::dds_::Poses_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Poses__callbacks = {
  "mymsg::msg",
  "Poses",
  &get_type_code__Poses,
  nullptr,
  nullptr,
  &to_cdr_stream__Poses,
  &to_message__Poses
};

static rosidl_message_type_support_t _Poses__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Poses__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace mymsg


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_mymsg
const rosidl_message_type_support_t *
get_message_type_support_handle<mymsg::msg::Poses>()
{
  return &mymsg::msg::typesupport_connext_cpp::_Poses__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mymsg, msg,
  Poses)()
{
  return &mymsg::msg::typesupport_connext_cpp::_Poses__handle;
}

#ifdef __cplusplus
}
#endif
