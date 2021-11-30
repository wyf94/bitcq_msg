// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sort_track_msg:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TARGET__BUILDER_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__TARGET__BUILDER_HPP_

#include "sort_track_msg/msg/detail/target__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sort_track_msg
{

namespace msg
{

namespace builder
{

class Init_Target_ymax
{
public:
  explicit Init_Target_ymax(::sort_track_msg::msg::Target & msg)
  : msg_(msg)
  {}
  ::sort_track_msg::msg::Target ymax(::sort_track_msg::msg::Target::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sort_track_msg::msg::Target msg_;
};

class Init_Target_xmax
{
public:
  explicit Init_Target_xmax(::sort_track_msg::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_ymax xmax(::sort_track_msg::msg::Target::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_Target_ymax(msg_);
  }

private:
  ::sort_track_msg::msg::Target msg_;
};

class Init_Target_ymin
{
public:
  explicit Init_Target_ymin(::sort_track_msg::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_xmax ymin(::sort_track_msg::msg::Target::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_Target_xmax(msg_);
  }

private:
  ::sort_track_msg::msg::Target msg_;
};

class Init_Target_xmin
{
public:
  explicit Init_Target_xmin(::sort_track_msg::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_ymin xmin(::sort_track_msg::msg::Target::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_Target_ymin(msg_);
  }

private:
  ::sort_track_msg::msg::Target msg_;
};

class Init_Target_vy
{
public:
  explicit Init_Target_vy(::sort_track_msg::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_xmin vy(::sort_track_msg::msg::Target::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_Target_xmin(msg_);
  }

private:
  ::sort_track_msg::msg::Target msg_;
};

class Init_Target_vx
{
public:
  explicit Init_Target_vx(::sort_track_msg::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_vy vx(::sort_track_msg::msg::Target::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_Target_vy(msg_);
  }

private:
  ::sort_track_msg::msg::Target msg_;
};

class Init_Target_y
{
public:
  explicit Init_Target_y(::sort_track_msg::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_vx y(::sort_track_msg::msg::Target::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Target_vx(msg_);
  }

private:
  ::sort_track_msg::msg::Target msg_;
};

class Init_Target_x
{
public:
  explicit Init_Target_x(::sort_track_msg::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_y x(::sort_track_msg::msg::Target::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Target_y(msg_);
  }

private:
  ::sort_track_msg::msg::Target msg_;
};

class Init_Target_id
{
public:
  Init_Target_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_x id(::sort_track_msg::msg::Target::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Target_x(msg_);
  }

private:
  ::sort_track_msg::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sort_track_msg::msg::Target>()
{
  return sort_track_msg::msg::builder::Init_Target_id();
}

}  // namespace sort_track_msg

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TARGET__BUILDER_HPP_
