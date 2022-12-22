// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mymsg/msg/detail/multi_transform__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mymsg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MultiTransform_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mymsg::msg::MultiTransform(_init);
}

void MultiTransform_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mymsg::msg::MultiTransform *>(message_memory);
  typed_message->~MultiTransform();
}

size_t size_function__MultiTransform__transform(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mymsg::msg::Transform> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiTransform__transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mymsg::msg::Transform> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiTransform__transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mymsg::msg::Transform> *>(untyped_member);
  return &member[index];
}

void resize_function__MultiTransform__transform(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mymsg::msg::Transform> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiTransform__id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiTransform__id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiTransform__id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__MultiTransform__id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MultiTransform_message_member_array[2] = {
  {
    "transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mymsg::msg::Transform>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsg::msg::MultiTransform, transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiTransform__transform,  // size() function pointer
    get_const_function__MultiTransform__transform,  // get_const(index) function pointer
    get_function__MultiTransform__transform,  // get(index) function pointer
    resize_function__MultiTransform__transform  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsg::msg::MultiTransform, id),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiTransform__id,  // size() function pointer
    get_const_function__MultiTransform__id,  // get_const(index) function pointer
    get_function__MultiTransform__id,  // get(index) function pointer
    resize_function__MultiTransform__id  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MultiTransform_message_members = {
  "mymsg::msg",  // message namespace
  "MultiTransform",  // message name
  2,  // number of fields
  sizeof(mymsg::msg::MultiTransform),
  MultiTransform_message_member_array,  // message members
  MultiTransform_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiTransform_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MultiTransform_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MultiTransform_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mymsg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mymsg::msg::MultiTransform>()
{
  return &::mymsg::msg::rosidl_typesupport_introspection_cpp::MultiTransform_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mymsg, msg, MultiTransform)() {
  return &::mymsg::msg::rosidl_typesupport_introspection_cpp::MultiTransform_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
