// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sort_track_msg:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TARGET__STRUCT_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__TARGET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__sort_track_msg__msg__Target __attribute__((deprecated))
#else
# define DEPRECATED__sort_track_msg__msg__Target __declspec(deprecated)
#endif

namespace sort_track_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Target_
{
  using Type = Target_<ContainerAllocator>;

  explicit Target_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->xmin = 0ll;
      this->ymin = 0ll;
      this->xmax = 0ll;
      this->ymax = 0ll;
    }
  }

  explicit Target_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->xmin = 0ll;
      this->ymin = 0ll;
      this->xmax = 0ll;
      this->ymax = 0ll;
    }
  }

  // field types and members
  using _id_type =
    int16_t;
  _id_type id;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _xmin_type =
    int64_t;
  _xmin_type xmin;
  using _ymin_type =
    int64_t;
  _ymin_type ymin;
  using _xmax_type =
    int64_t;
  _xmax_type xmax;
  using _ymax_type =
    int64_t;
  _ymax_type ymax;

  // setters for named parameter idiom
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__xmin(
    const int64_t & _arg)
  {
    this->xmin = _arg;
    return *this;
  }
  Type & set__ymin(
    const int64_t & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__xmax(
    const int64_t & _arg)
  {
    this->xmax = _arg;
    return *this;
  }
  Type & set__ymax(
    const int64_t & _arg)
  {
    this->ymax = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sort_track_msg::msg::Target_<ContainerAllocator> *;
  using ConstRawPtr =
    const sort_track_msg::msg::Target_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sort_track_msg::msg::Target_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sort_track_msg::msg::Target_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sort_track_msg::msg::Target_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sort_track_msg::msg::Target_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sort_track_msg::msg::Target_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sort_track_msg::msg::Target_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sort_track_msg::msg::Target_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sort_track_msg::msg::Target_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sort_track_msg__msg__Target
    std::shared_ptr<sort_track_msg::msg::Target_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sort_track_msg__msg__Target
    std::shared_ptr<sort_track_msg::msg::Target_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Target_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->xmin != other.xmin) {
      return false;
    }
    if (this->ymin != other.ymin) {
      return false;
    }
    if (this->xmax != other.xmax) {
      return false;
    }
    if (this->ymax != other.ymax) {
      return false;
    }
    return true;
  }
  bool operator!=(const Target_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Target_

// alias to use template instance with default allocator
using Target =
  sort_track_msg::msg::Target_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sort_track_msg

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TARGET__STRUCT_HPP_
