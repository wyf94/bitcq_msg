// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sort_track_msg:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include "sort_track_msg/msg/detail/bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sort_track_msg
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_ymax
{
public:
  explicit Init_BoundingBox_ymax(::sort_track_msg::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::sort_track_msg::msg::BoundingBox ymax(::sort_track_msg::msg::BoundingBox::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sort_track_msg::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmax
{
public:
  explicit Init_BoundingBox_xmax(::sort_track_msg::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymax xmax(::sort_track_msg::msg::BoundingBox::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BoundingBox_ymax(msg_);
  }

private:
  ::sort_track_msg::msg::BoundingBox msg_;
};

class Init_BoundingBox_ymin
{
public:
  explicit Init_BoundingBox_ymin(::sort_track_msg::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_xmax ymin(::sort_track_msg::msg::BoundingBox::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BoundingBox_xmax(msg_);
  }

private:
  ::sort_track_msg::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmin
{
public:
  explicit Init_BoundingBox_xmin(::sort_track_msg::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymin xmin(::sort_track_msg::msg::BoundingBox::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BoundingBox_ymin(msg_);
  }

private:
  ::sort_track_msg::msg::BoundingBox msg_;
};

class Init_BoundingBox_id
{
public:
  Init_BoundingBox_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_xmin id(::sort_track_msg::msg::BoundingBox::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BoundingBox_xmin(msg_);
  }

private:
  ::sort_track_msg::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sort_track_msg::msg::BoundingBox>()
{
  return sort_track_msg::msg::builder::Init_BoundingBox_id();
}

}  // namespace sort_track_msg

#endif  // SORT_TRACK_MSG__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
