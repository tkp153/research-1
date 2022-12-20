// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsg:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__POSE__TRAITS_HPP_
#define MYMSG__MSG__DETAIL__POSE__TRAITS_HPP_

#include "mymsg/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsg::msg::Pose>()
{
  return "mymsg::msg::Pose";
}

template<>
inline const char * name<mymsg::msg::Pose>()
{
  return "mymsg/msg/Pose";
}

template<>
struct has_fixed_size<mymsg::msg::Pose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mymsg::msg::Pose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mymsg::msg::Pose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSG__MSG__DETAIL__POSE__TRAITS_HPP_
