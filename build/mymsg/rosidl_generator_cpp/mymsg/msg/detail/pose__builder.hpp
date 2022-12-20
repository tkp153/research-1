// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsg:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__POSE__BUILDER_HPP_
#define MYMSG__MSG__DETAIL__POSE__BUILDER_HPP_

#include "mymsg/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsg
{

namespace msg
{

namespace builder
{

class Init_Pose_keypoints
{
public:
  Init_Pose_keypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsg::msg::Pose keypoints(::mymsg::msg::Pose::_keypoints_type arg)
  {
    msg_.keypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsg::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsg::msg::Pose>()
{
  return mymsg::msg::builder::Init_Pose_keypoints();
}

}  // namespace mymsg

#endif  // MYMSG__MSG__DETAIL__POSE__BUILDER_HPP_
