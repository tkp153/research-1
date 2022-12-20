// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsg:msg/Poses.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__POSES__BUILDER_HPP_
#define MYMSG__MSG__DETAIL__POSES__BUILDER_HPP_

#include "mymsg/msg/detail/poses__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsg
{

namespace msg
{

namespace builder
{

class Init_Poses_id
{
public:
  explicit Init_Poses_id(::mymsg::msg::Poses & msg)
  : msg_(msg)
  {}
  ::mymsg::msg::Poses id(::mymsg::msg::Poses::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsg::msg::Poses msg_;
};

class Init_Poses_poses
{
public:
  explicit Init_Poses_poses(::mymsg::msg::Poses & msg)
  : msg_(msg)
  {}
  Init_Poses_id poses(::mymsg::msg::Poses::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_Poses_id(msg_);
  }

private:
  ::mymsg::msg::Poses msg_;
};

class Init_Poses_header
{
public:
  Init_Poses_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Poses_poses header(::mymsg::msg::Poses::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Poses_poses(msg_);
  }

private:
  ::mymsg::msg::Poses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsg::msg::Poses>()
{
  return mymsg::msg::builder::Init_Poses_header();
}

}  // namespace mymsg

#endif  // MYMSG__MSG__DETAIL__POSES__BUILDER_HPP_
