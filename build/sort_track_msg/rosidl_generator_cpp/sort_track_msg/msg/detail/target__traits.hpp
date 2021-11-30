// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sort_track_msg:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TARGET__TRAITS_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__TARGET__TRAITS_HPP_

#include "sort_track_msg/msg/detail/target__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sort_track_msg::msg::Target>()
{
  return "sort_track_msg::msg::Target";
}

template<>
inline const char * name<sort_track_msg::msg::Target>()
{
  return "sort_track_msg/msg/Target";
}

template<>
struct has_fixed_size<sort_track_msg::msg::Target>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sort_track_msg::msg::Target>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sort_track_msg::msg::Target>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TARGET__TRAITS_HPP_
