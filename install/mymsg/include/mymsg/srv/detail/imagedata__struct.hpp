// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsg:srv/Imagedata.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__SRV__DETAIL__IMAGEDATA__STRUCT_HPP_
#define MYMSG__SRV__DETAIL__IMAGEDATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'input_data'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mymsg__srv__Imagedata_Request __attribute__((deprecated))
#else
# define DEPRECATED__mymsg__srv__Imagedata_Request __declspec(deprecated)
#endif

namespace mymsg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Imagedata_Request_
{
  using Type = Imagedata_Request_<ContainerAllocator>;

  explicit Imagedata_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_count = 0ll;
    }
  }

  explicit Imagedata_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_count = 0ll;
    }
  }

  // field types and members
  using _input_data_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _input_data_type input_data;
  using _input_count_type =
    int64_t;
  _input_count_type input_count;

  // setters for named parameter idiom
  Type & set__input_data(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->input_data = _arg;
    return *this;
  }
  Type & set__input_count(
    const int64_t & _arg)
  {
    this->input_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsg::srv::Imagedata_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsg::srv::Imagedata_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsg::srv::Imagedata_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsg::srv::Imagedata_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsg::srv::Imagedata_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsg::srv::Imagedata_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsg::srv::Imagedata_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsg::srv::Imagedata_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsg::srv::Imagedata_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsg::srv::Imagedata_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsg__srv__Imagedata_Request
    std::shared_ptr<mymsg::srv::Imagedata_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsg__srv__Imagedata_Request
    std::shared_ptr<mymsg::srv::Imagedata_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imagedata_Request_ & other) const
  {
    if (this->input_data != other.input_data) {
      return false;
    }
    if (this->input_count != other.input_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imagedata_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imagedata_Request_

// alias to use template instance with default allocator
using Imagedata_Request =
  mymsg::srv::Imagedata_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mymsg


// Include directives for member types
// Member 'output_data'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mymsg__srv__Imagedata_Response __attribute__((deprecated))
#else
# define DEPRECATED__mymsg__srv__Imagedata_Response __declspec(deprecated)
#endif

namespace mymsg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Imagedata_Response_
{
  using Type = Imagedata_Response_<ContainerAllocator>;

  explicit Imagedata_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output_cut = false;
      this->output_count = 0ll;
    }
  }

  explicit Imagedata_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output_cut = false;
      this->output_count = 0ll;
    }
  }

  // field types and members
  using _output_cut_type =
    bool;
  _output_cut_type output_cut;
  using _output_count_type =
    int64_t;
  _output_count_type output_count;
  using _output_data_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _output_data_type output_data;

  // setters for named parameter idiom
  Type & set__output_cut(
    const bool & _arg)
  {
    this->output_cut = _arg;
    return *this;
  }
  Type & set__output_count(
    const int64_t & _arg)
  {
    this->output_count = _arg;
    return *this;
  }
  Type & set__output_data(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->output_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsg::srv::Imagedata_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsg::srv::Imagedata_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsg::srv::Imagedata_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsg::srv::Imagedata_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsg::srv::Imagedata_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsg::srv::Imagedata_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsg::srv::Imagedata_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsg::srv::Imagedata_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsg::srv::Imagedata_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsg::srv::Imagedata_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsg__srv__Imagedata_Response
    std::shared_ptr<mymsg::srv::Imagedata_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsg__srv__Imagedata_Response
    std::shared_ptr<mymsg::srv::Imagedata_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imagedata_Response_ & other) const
  {
    if (this->output_cut != other.output_cut) {
      return false;
    }
    if (this->output_count != other.output_count) {
      return false;
    }
    if (this->output_data != other.output_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imagedata_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imagedata_Response_

// alias to use template instance with default allocator
using Imagedata_Response =
  mymsg::srv::Imagedata_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mymsg

namespace mymsg
{

namespace srv
{

struct Imagedata
{
  using Request = mymsg::srv::Imagedata_Request;
  using Response = mymsg::srv::Imagedata_Response;
};

}  // namespace srv

}  // namespace mymsg

#endif  // MYMSG__SRV__DETAIL__IMAGEDATA__STRUCT_HPP_
