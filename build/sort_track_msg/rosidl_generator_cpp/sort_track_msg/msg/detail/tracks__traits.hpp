// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sort_track_msg:msg/Tracks.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TRACKS__TRAITS_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__TRACKS__TRAITS_HPP_

#include "sort_track_msg/msg/detail/tracks__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sort_track_msg::msg::Tracks>()
{
  return "sort_track_msg::msg::Tracks";
}

template<>
inline const char * name<sort_track_msg::msg::Tracks>()
{
  return "sort_track_msg/msg/Tracks";
}

template<>
struct has_fixed_size<sort_track_msg::msg::Tracks>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sort_track_msg::msg::Tracks>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sort_track_msg::msg::Tracks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TRACKS__TRAITS_HPP_
