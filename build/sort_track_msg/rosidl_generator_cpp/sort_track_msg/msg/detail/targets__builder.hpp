// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sort_track_msg:msg/Targets.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TARGETS__BUILDER_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__TARGETS__BUILDER_HPP_

#include "sort_track_msg/msg/detail/targets__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sort_track_msg
{

namespace msg
{

namespace builder
{

class Init_Targets_data
{
public:
  explicit Init_Targets_data(::sort_track_msg::msg::Targets & msg)
  : msg_(msg)
  {}
  ::sort_track_msg::msg::Targets data(::sort_track_msg::msg::Targets::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sort_track_msg::msg::Targets msg_;
};

class Init_Targets_header
{
public:
  Init_Targets_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Targets_data header(::sort_track_msg::msg::Targets::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Targets_data(msg_);
  }

private:
  ::sort_track_msg::msg::Targets msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sort_track_msg::msg::Targets>()
{
  return sort_track_msg::msg::builder::Init_Targets_header();
}

}  // namespace sort_track_msg

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TARGETS__BUILDER_HPP_
