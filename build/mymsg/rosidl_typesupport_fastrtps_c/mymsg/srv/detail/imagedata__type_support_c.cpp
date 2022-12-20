// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mymsg:srv/Imagedata.idl
// generated code does not contain a copyright notice
#include "mymsg/srv/detail/imagedata__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mymsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mymsg/srv/detail/imagedata__struct.h"
#include "mymsg/srv/detail/imagedata__functions.h"
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

#include "sensor_msgs/msg/detail/image__functions.h"  // input_data

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mymsg
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mymsg
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mymsg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _Imagedata_Request__ros_msg_type = mymsg__srv__Imagedata_Request;

static bool _Imagedata_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Imagedata_Request__ros_msg_type * ros_message = static_cast<const _Imagedata_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->input_data, cdr))
    {
      return false;
    }
  }

  // Field name: input_count
  {
    cdr << ros_message->input_count;
  }

  return true;
}

static bool _Imagedata_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Imagedata_Request__ros_msg_type * ros_message = static_cast<_Imagedata_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->input_data))
    {
      return false;
    }
  }

  // Field name: input_count
  {
    cdr >> ros_message->input_count;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t get_serialized_size_mymsg__srv__Imagedata_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Imagedata_Request__ros_msg_type * ros_message = static_cast<const _Imagedata_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input_data

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->input_data), current_alignment);
  // field.name input_count
  {
    size_t item_size = sizeof(ros_message->input_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Imagedata_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mymsg__srv__Imagedata_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t max_serialized_size_mymsg__srv__Imagedata_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: input_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        full_bounded, current_alignment);
    }
  }
  // member: input_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Imagedata_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mymsg__srv__Imagedata_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Imagedata_Request = {
  "mymsg::srv",
  "Imagedata_Request",
  _Imagedata_Request__cdr_serialize,
  _Imagedata_Request__cdr_deserialize,
  _Imagedata_Request__get_serialized_size,
  _Imagedata_Request__max_serialized_size
};

static rosidl_message_type_support_t _Imagedata_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Imagedata_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Imagedata_Request)() {
  return &_Imagedata_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mymsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mymsg/srv/detail/imagedata__struct.h"
// already included above
// #include "mymsg/srv/detail/imagedata__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "sensor_msgs/msg/detail/image__functions.h"  // output_data

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mymsg
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mymsg
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mymsg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _Imagedata_Response__ros_msg_type = mymsg__srv__Imagedata_Response;

static bool _Imagedata_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Imagedata_Response__ros_msg_type * ros_message = static_cast<const _Imagedata_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output_cut
  {
    cdr << (ros_message->output_cut ? true : false);
  }

  // Field name: output_count
  {
    cdr << ros_message->output_count;
  }

  // Field name: output_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->output_data, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Imagedata_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Imagedata_Response__ros_msg_type * ros_message = static_cast<_Imagedata_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output_cut
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->output_cut = tmp ? true : false;
  }

  // Field name: output_count
  {
    cdr >> ros_message->output_count;
  }

  // Field name: output_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->output_data))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t get_serialized_size_mymsg__srv__Imagedata_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Imagedata_Response__ros_msg_type * ros_message = static_cast<const _Imagedata_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name output_cut
  {
    size_t item_size = sizeof(ros_message->output_cut);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output_count
  {
    size_t item_size = sizeof(ros_message->output_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output_data

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->output_data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Imagedata_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mymsg__srv__Imagedata_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mymsg
size_t max_serialized_size_mymsg__srv__Imagedata_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: output_cut
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: output_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: output_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Imagedata_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mymsg__srv__Imagedata_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Imagedata_Response = {
  "mymsg::srv",
  "Imagedata_Response",
  _Imagedata_Response__cdr_serialize,
  _Imagedata_Response__cdr_deserialize,
  _Imagedata_Response__get_serialized_size,
  _Imagedata_Response__max_serialized_size
};

static rosidl_message_type_support_t _Imagedata_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Imagedata_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Imagedata_Response)() {
  return &_Imagedata_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mymsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mymsg/srv/imagedata.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Imagedata__callbacks = {
  "mymsg::srv",
  "Imagedata",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Imagedata_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Imagedata_Response)(),
};

static rosidl_service_type_support_t Imagedata__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Imagedata__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mymsg, srv, Imagedata)() {
  return &Imagedata__handle;
}

#if defined(__cplusplus)
}
#endif
