// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sort_track_msg:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
#define SORT_TRACK_MSG__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_

#include "sort_track_msg/msg/detail/bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sort_track_msg::msg::BoundingBox>()
{
  return "sort_track_msg::msg::BoundingBox";
}

template<>
inline const char * name<sort_track_msg::msg::BoundingBox>()
{
  return "sort_track_msg/msg/BoundingBox";
}

template<>
struct has_fixed_size<sort_track_msg::msg::BoundingBox>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sort_track_msg::msg::BoundingBox>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sort_track_msg::msg::BoundingBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SORT_TRACK_MSG__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
