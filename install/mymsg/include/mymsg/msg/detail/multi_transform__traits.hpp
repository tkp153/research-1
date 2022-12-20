// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__MULTI_TRANSFORM__TRAITS_HPP_
#define MYMSG__MSG__DETAIL__MULTI_TRANSFORM__TRAITS_HPP_

#include "mymsg/msg/detail/multi_transform__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsg::msg::MultiTransform>()
{
  return "mymsg::msg::MultiTransform";
}

template<>
inline const char * name<mymsg::msg::MultiTransform>()
{
  return "mymsg/msg/MultiTransform";
}

template<>
struct has_fixed_size<mymsg::msg::MultiTransform>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mymsg::msg::MultiTransform>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mymsg::msg::MultiTransform>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSG__MSG__DETAIL__MULTI_TRANSFORM__TRAITS_HPP_
