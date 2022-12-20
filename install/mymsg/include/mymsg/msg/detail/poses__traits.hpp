// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsg:msg/Poses.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__POSES__TRAITS_HPP_
#define MYMSG__MSG__DETAIL__POSES__TRAITS_HPP_

#include "mymsg/msg/detail/poses__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsg::msg::Poses>()
{
  return "mymsg::msg::Poses";
}

template<>
inline const char * name<mymsg::msg::Poses>()
{
  return "mymsg/msg/Poses";
}

template<>
struct has_fixed_size<mymsg::msg::Poses>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mymsg::msg::Poses>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mymsg::msg::Poses>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSG__MSG__DETAIL__POSES__TRAITS_HPP_
