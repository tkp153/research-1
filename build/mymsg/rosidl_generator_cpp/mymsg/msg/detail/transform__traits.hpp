// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsg:msg/Transform.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__TRANSFORM__TRAITS_HPP_
#define MYMSG__MSG__DETAIL__TRANSFORM__TRAITS_HPP_

#include "mymsg/msg/detail/transform__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsg::msg::Transform>()
{
  return "mymsg::msg::Transform";
}

template<>
inline const char * name<mymsg::msg::Transform>()
{
  return "mymsg/msg/Transform";
}

template<>
struct has_fixed_size<mymsg::msg::Transform>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct has_bounded_size<mymsg::msg::Transform>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct is_message<mymsg::msg::Transform>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSG__MSG__DETAIL__TRANSFORM__TRAITS_HPP_
