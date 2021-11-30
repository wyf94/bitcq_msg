// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sort_track_msg:msg/Tracks.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TRACKS__BUILDER_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__TRACKS__BUILDER_HPP_

#include "sort_track_msg/msg/detail/tracks__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sort_track_msg
{

namespace msg
{

namespace builder
{

class Init_Tracks_bounding_boxes
{
public:
  explicit Init_Tracks_bounding_boxes(::sort_track_msg::msg::Tracks & msg)
  : msg_(msg)
  {}
  ::sort_track_msg::msg::Tracks bounding_boxes(::sort_track_msg::msg::Tracks::_bounding_boxes_type arg)
  {
    msg_.bounding_boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sort_track_msg::msg::Tracks msg_;
};

class Init_Tracks_header
{
public:
  Init_Tracks_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tracks_bounding_boxes header(::sort_track_msg::msg::Tracks::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Tracks_bounding_boxes(msg_);
  }

private:
  ::sort_track_msg::msg::Tracks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sort_track_msg::msg::Tracks>()
{
  return sort_track_msg::msg::builder::Init_Tracks_header();
}

}  // namespace sort_track_msg

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TRACKS__BUILDER_HPP_
