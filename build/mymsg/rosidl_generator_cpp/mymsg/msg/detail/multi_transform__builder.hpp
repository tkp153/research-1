// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__MULTI_TRANSFORM__BUILDER_HPP_
#define MYMSG__MSG__DETAIL__MULTI_TRANSFORM__BUILDER_HPP_

#include "mymsg/msg/detail/multi_transform__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsg
{

namespace msg
{

namespace builder
{

class Init_MultiTransform_transform
{
public:
  Init_MultiTransform_transform()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsg::msg::MultiTransform transform(::mymsg::msg::MultiTransform::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsg::msg::MultiTransform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsg::msg::MultiTransform>()
{
  return mymsg::msg::builder::Init_MultiTransform_transform();
}

}  // namespace mymsg

#endif  // MYMSG__MSG__DETAIL__MULTI_TRANSFORM__BUILDER_HPP_
