// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsg:srv/Imagedata.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__SRV__DETAIL__IMAGEDATA__TRAITS_HPP_
#define MYMSG__SRV__DETAIL__IMAGEDATA__TRAITS_HPP_

#include "mymsg/srv/detail/imagedata__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'input_data'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsg::srv::Imagedata_Request>()
{
  return "mymsg::srv::Imagedata_Request";
}

template<>
inline const char * name<mymsg::srv::Imagedata_Request>()
{
  return "mymsg/srv/Imagedata_Request";
}

template<>
struct has_fixed_size<mymsg::srv::Imagedata_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<mymsg::srv::Imagedata_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<mymsg::srv::Imagedata_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'output_data'
// already included above
// #include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsg::srv::Imagedata_Response>()
{
  return "mymsg::srv::Imagedata_Response";
}

template<>
inline const char * name<mymsg::srv::Imagedata_Response>()
{
  return "mymsg/srv/Imagedata_Response";
}

template<>
struct has_fixed_size<mymsg::srv::Imagedata_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<mymsg::srv::Imagedata_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<mymsg::srv::Imagedata_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsg::srv::Imagedata>()
{
  return "mymsg::srv::Imagedata";
}

template<>
inline const char * name<mymsg::srv::Imagedata>()
{
  return "mymsg/srv/Imagedata";
}

template<>
struct has_fixed_size<mymsg::srv::Imagedata>
  : std::integral_constant<
    bool,
    has_fixed_size<mymsg::srv::Imagedata_Request>::value &&
    has_fixed_size<mymsg::srv::Imagedata_Response>::value
  >
{
};

template<>
struct has_bounded_size<mymsg::srv::Imagedata>
  : std::integral_constant<
    bool,
    has_bounded_size<mymsg::srv::Imagedata_Request>::value &&
    has_bounded_size<mymsg::srv::Imagedata_Response>::value
  >
{
};

template<>
struct is_service<mymsg::srv::Imagedata>
  : std::true_type
{
};

template<>
struct is_service_request<mymsg::srv::Imagedata_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mymsg::srv::Imagedata_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYMSG__SRV__DETAIL__IMAGEDATA__TRAITS_HPP_
