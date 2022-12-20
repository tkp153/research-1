// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice


#ifndef MYMSG__MSG__MULTI_TRANSFORM__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MYMSG__MSG__MULTI_TRANSFORM__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mymsg/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "mymsg/msg/detail/multi_transform__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mymsg/msg/dds_connext/MultiTransform_Support.h"
#include "mymsg/msg/dds_connext/MultiTransform_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace mymsg
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MultiTransform();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsg
convert_ros_message_to_dds(
  const mymsg::msg::MultiTransform & ros_message,
  mymsg::msg::dds_::MultiTransform_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsg
convert_dds_message_to_ros(
  const mymsg::msg::dds_::MultiTransform_ & dds_message,
  mymsg::msg::MultiTransform & ros_message);

bool
to_cdr_stream__MultiTransform(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MultiTransform(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace mymsg


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mymsg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mymsg, msg,
  MultiTransform)();

#ifdef __cplusplus
}
#endif


#endif  // MYMSG__MSG__MULTI_TRANSFORM__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
