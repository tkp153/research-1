// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mymsg:msg/Poses.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__POSES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MYMSG__MSG__DETAIL__POSES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mymsg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mymsg/msg/detail/poses__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace mymsg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsg
cdr_serialize(
  const mymsg::msg::Poses & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mymsg::msg::Poses & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsg
get_serialized_size(
  const mymsg::msg::Poses & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsg
max_serialized_size_Poses(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mymsg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mymsg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mymsg, msg, Poses)();

#ifdef __cplusplus
}
#endif

#endif  // MYMSG__MSG__DETAIL__POSES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
