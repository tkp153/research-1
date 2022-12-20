// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsg:msg/Transform.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__TRANSFORM__BUILDER_HPP_
#define MYMSG__MSG__DETAIL__TRANSFORM__BUILDER_HPP_

#include "mymsg/msg/detail/transform__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsg
{

namespace msg
{

namespace builder
{

class Init_Transform_transform
{
public:
  Init_Transform_transform()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsg::msg::Transform transform(::mymsg::msg::Transform::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsg::msg::Transform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsg::msg::Transform>()
{
  return mymsg::msg::builder::Init_Transform_transform();
}

}  // namespace mymsg

#endif  // MYMSG__MSG__DETAIL__TRANSFORM__BUILDER_HPP_
