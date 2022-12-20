// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsg:msg/MultiTransform.idl
// generated code does not contain a copyright notice

#ifndef MYMSG__MSG__DETAIL__MULTI_TRANSFORM__STRUCT_HPP_
#define MYMSG__MSG__DETAIL__MULTI_TRANSFORM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'transform'
#include "mymsg/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mymsg__msg__MultiTransform __attribute__((deprecated))
#else
# define DEPRECATED__mymsg__msg__MultiTransform __declspec(deprecated)
#endif

namespace mymsg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiTransform_
{
  using Type = MultiTransform_<ContainerAllocator>;

  explicit MultiTransform_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MultiTransform_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _transform_type =
    std::vector<mymsg::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<mymsg::msg::Transform_<ContainerAllocator>>::other>;
  _transform_type transform;

  // setters for named parameter idiom
  Type & set__transform(
    const std::vector<mymsg::msg::Transform_<ContainerAllocator>, typename ContainerAllocator::template rebind<mymsg::msg::Transform_<ContainerAllocator>>::other> & _arg)
  {
    this->transform = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsg::msg::MultiTransform_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsg::msg::MultiTransform_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsg::msg::MultiTransform_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsg::msg::MultiTransform_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsg::msg::MultiTransform_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsg::msg::MultiTransform_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsg::msg::MultiTransform_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsg::msg::MultiTransform_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsg::msg::MultiTransform_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsg::msg::MultiTransform_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsg__msg__MultiTransform
    std::shared_ptr<mymsg::msg::MultiTransform_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsg__msg__MultiTransform
    std::shared_ptr<mymsg::msg::MultiTransform_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiTransform_ & other) const
  {
    if (this->transform != other.transform) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiTransform_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiTransform_

// alias to use template instance with default allocator
using MultiTransform =
  mymsg::msg::MultiTransform_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsg

#endif  // MYMSG__MSG__DETAIL__MULTI_TRANSFORM__STRUCT_HPP_
