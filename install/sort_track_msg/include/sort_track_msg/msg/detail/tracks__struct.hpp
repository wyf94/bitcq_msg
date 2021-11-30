// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sort_track_msg:msg/Tracks.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TRACKS__STRUCT_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__TRACKS__STRUCT_HPP_

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
// Member 'bounding_boxes'
#include "sort_track_msg/msg/detail/bounding_box__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sort_track_msg__msg__Tracks __attribute__((deprecated))
#else
# define DEPRECATED__sort_track_msg__msg__Tracks __declspec(deprecated)
#endif

namespace sort_track_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tracks_
{
  using Type = Tracks_<ContainerAllocator>;

  explicit Tracks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Tracks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bounding_boxes_type =
    std::vector<sort_track_msg::msg::BoundingBox_<ContainerAllocator>, typename ContainerAllocator::template rebind<sort_track_msg::msg::BoundingBox_<ContainerAllocator>>::other>;
  _bounding_boxes_type bounding_boxes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bounding_boxes(
    const std::vector<sort_track_msg::msg::BoundingBox_<ContainerAllocator>, typename ContainerAllocator::template rebind<sort_track_msg::msg::BoundingBox_<ContainerAllocator>>::other> & _arg)
  {
    this->bounding_boxes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sort_track_msg::msg::Tracks_<ContainerAllocator> *;
  using ConstRawPtr =
    const sort_track_msg::msg::Tracks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sort_track_msg::msg::Tracks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sort_track_msg::msg::Tracks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sort_track_msg::msg::Tracks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sort_track_msg::msg::Tracks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sort_track_msg::msg::Tracks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sort_track_msg::msg::Tracks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sort_track_msg::msg::Tracks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sort_track_msg::msg::Tracks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sort_track_msg__msg__Tracks
    std::shared_ptr<sort_track_msg::msg::Tracks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sort_track_msg__msg__Tracks
    std::shared_ptr<sort_track_msg::msg::Tracks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tracks_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bounding_boxes != other.bounding_boxes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tracks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tracks_

// alias to use template instance with default allocator
using Tracks =
  sort_track_msg::msg::Tracks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sort_track_msg

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TRACKS__STRUCT_HPP_
