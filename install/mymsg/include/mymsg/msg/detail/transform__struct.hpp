// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsg:msg/Transform.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__TRANSFORM__STRUCT_HPP_
#define MYMSG__MSG__DETAIL__TRANSFORM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mymsg__msg__Transform __attribute__((deprecated))
#else
# define DEPRECATED__mymsg__msg__Transform __declspec(deprecated)
#endif

namespace mymsg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Transform_
{
  using Type = Transform_<ContainerAllocator>;

  explicit Transform_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_init)
  {
    (void)_init;
  }

  explicit Transform_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _transform_type transform;

  // setters for named parameter idiom
  Type & set__transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsg::msg::Transform_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsg::msg::Transform_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsg::msg::Transform_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsg::msg::Transform_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsg::msg::Transform_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsg::msg::Transform_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsg::msg::Transform_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsg::msg::Transform_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsg::msg::Transform_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsg::msg::Transform_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsg__msg__Transform
    std::shared_ptr<mymsg::msg::Transform_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsg__msg__Transform
    std::shared_ptr<mymsg::msg::Transform_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transform_ & other) const
  {
    if (this->transform != other.transform) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transform_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transform_

// alias to use template instance with default allocator
using Transform =
  mymsg::msg::Transform_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsg

#endif  // MYMSG__MSG__DETAIL__TRANSFORM__STRUCT_HPP_
