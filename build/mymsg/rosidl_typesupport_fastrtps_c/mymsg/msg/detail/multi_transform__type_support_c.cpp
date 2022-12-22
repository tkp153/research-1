// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice
#include "mymsg/msg/detail/multi_transform__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mymsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mymsg/msg/detail/multi_transform__struct.h"
#include "mymsg/msg/detail/multi_transform__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mymsg/msg/detail/transform__functions.h"  // transform
#include "rosidl_runtime_c/string.h"  // id
#include "rosidl_runtime_c/string_functions.h"  // id

// forward declare type support functions
size_t get_serialized_size_mymsg__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mymsg__msg__Transform(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, msg, Transform)();


using _MultiTransform__ros_msg_type = mymsg__msg__MultiTransform;

static bool _MultiTransform__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiTransform__ros_msg_type * ros_message = static_cast<const _MultiTransform__ros_msg_type *>(untyped_ros_message);
  // Field name: transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mymsg, msg, Transform
      )()->data);
    size_t size = ros_message->transform.size;
    auto array_ptr = ros_message->transform.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: id
  {
    size_t size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _MultiTransform__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiTransform__ros_msg_type * ros_message = static_cast<_MultiTransform__ros_msg_type *>(untyped_ros_message);
  // Field name: transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mymsg, msg, Transform
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->transform.data) {
      mymsg__msg__Transform__Sequence__fini(&ros_message->transform);
    }
    if (!mymsg__msg__Transform__Sequence__init(&ros_message->transform, size)) {
      return "failed to create array for field 'transform'";
    }
    auto array_ptr = ros_message->transform.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->id.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->id);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->id, size)) {
      return "failed to create array for field 'id'";
    }
    auto array_ptr = ros_message->id.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'id'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t get_serialized_size_mymsg__msg__MultiTransform(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiTransform__ros_msg_type * ros_message = static_cast<const _MultiTransform__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name transform
  {
    size_t array_size = ros_message->transform.size;
    auto array_ptr = ros_message->transform.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mymsg__msg__Transform(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name id
  {
    size_t array_size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiTransform__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mymsg__msg__MultiTransform(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t max_serialized_size_mymsg__msg__MultiTransform(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: transform
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mymsg__msg__Transform(
        full_bounded, current_alignment);
    }
  }
  // member: id
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiTransform__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mymsg__msg__MultiTransform(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiTransform = {
  "mymsg::msg",
  "MultiTransform",
  _MultiTransform__cdr_serialize,
  _MultiTransform__cdr_deserialize,
  _MultiTransform__get_serialized_size,
  _MultiTransform__max_serialized_size
};

static rosidl_message_type_support_t _MultiTransform__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiTransform,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, msg, MultiTransform)() {
  return &_MultiTransform__type_support;
}

#if defined(__cplusplus)
}
#endif
