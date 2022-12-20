// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsg:srv/Imagedata.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__SRV__DETAIL__IMAGEDATA__BUILDER_HPP_
#define MYMSG__SRV__DETAIL__IMAGEDATA__BUILDER_HPP_

#include "mymsg/srv/detail/imagedata__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsg
{

namespace srv
{

namespace builder
{

class Init_Imagedata_Request_input_count
{
public:
  explicit Init_Imagedata_Request_input_count(::mymsg::srv::Imagedata_Request & msg)
  : msg_(msg)
  {}
  ::mymsg::srv::Imagedata_Request input_count(::mymsg::srv::Imagedata_Request::_input_count_type arg)
  {
    msg_.input_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsg::srv::Imagedata_Request msg_;
};

class Init_Imagedata_Request_input_data
{
public:
  Init_Imagedata_Request_input_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imagedata_Request_input_count input_data(::mymsg::srv::Imagedata_Request::_input_data_type arg)
  {
    msg_.input_data = std::move(arg);
    return Init_Imagedata_Request_input_count(msg_);
  }

private:
  ::mymsg::srv::Imagedata_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsg::srv::Imagedata_Request>()
{
  return mymsg::srv::builder::Init_Imagedata_Request_input_data();
}

}  // namespace mymsg


namespace mymsg
{

namespace srv
{

namespace builder
{

class Init_Imagedata_Response_output_data
{
public:
  explicit Init_Imagedata_Response_output_data(::mymsg::srv::Imagedata_Response & msg)
  : msg_(msg)
  {}
  ::mymsg::srv::Imagedata_Response output_data(::mymsg::srv::Imagedata_Response::_output_data_type arg)
  {
    msg_.output_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsg::srv::Imagedata_Response msg_;
};

class Init_Imagedata_Response_output_count
{
public:
  explicit Init_Imagedata_Response_output_count(::mymsg::srv::Imagedata_Response & msg)
  : msg_(msg)
  {}
  Init_Imagedata_Response_output_data output_count(::mymsg::srv::Imagedata_Response::_output_count_type arg)
  {
    msg_.output_count = std::move(arg);
    return Init_Imagedata_Response_output_data(msg_);
  }

private:
  ::mymsg::srv::Imagedata_Response msg_;
};

class Init_Imagedata_Response_output_cut
{
public:
  Init_Imagedata_Response_output_cut()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imagedata_Response_output_count output_cut(::mymsg::srv::Imagedata_Response::_output_cut_type arg)
  {
    msg_.output_cut = std::move(arg);
    return Init_Imagedata_Response_output_count(msg_);
  }

private:
  ::mymsg::srv::Imagedata_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsg::srv::Imagedata_Response>()
{
  return mymsg::srv::builder::Init_Imagedata_Response_output_cut();
}

}  // namespace mymsg

#endif  // MYMSG__SRV__DETAIL__IMAGEDATA__BUILDER_HPP_
