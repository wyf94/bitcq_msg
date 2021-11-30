// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sort_track_msg:msg/Targets.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TARGETS__STRUCT_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__TARGETS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'data'
#include "sort_track_msg/msg/detail/target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sort_track_msg__msg__Targets __attribute__((deprecated))
#else
# define DEPRECATED__sort_track_msg__msg__Targets __declspec(deprecated)
#endif

namespace sort_track_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Targets_
{
  using Type = Targets_<ContainerAllocator>;

  explicit Targets_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Targets_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<sort_track_msg::msg::Target_<ContainerAllocator>, typename ContainerAllocator::template rebind<sort_track_msg::msg::Target_<ContainerAllocator>>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<sort_track_msg::msg::Target_<ContainerAllocator>, typename ContainerAllocator::template rebind<sort_track_msg::msg::Target_<ContainerAllocator>>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sort_track_msg::msg::Targets_<ContainerAllocator> *;
  using ConstRawPtr =
    const sort_track_msg::msg::Targets_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sort_track_msg::msg::Targets_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sort_track_msg::msg::Targets_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sort_track_msg::msg::Targets_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sort_track_msg::msg::Targets_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sort_track_msg::msg::Targets_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sort_track_msg::msg::Targets_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sort_track_msg::msg::Targets_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sort_track_msg::msg::Targets_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sort_track_msg__msg__Targets
    std::shared_ptr<sort_track_msg::msg::Targets_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sort_track_msg__msg__Targets
    std::shared_ptr<sort_track_msg::msg::Targets_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Targets_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Targets_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Targets_

// alias to use template instance with default allocator
using Targets =
  sort_track_msg::msg::Targets_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sort_track_msg

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TARGETS__STRUCT_HPP_
