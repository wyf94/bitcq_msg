// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sort_track_msg:msg/Targets.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TARGETS__STRUCT_H_
#define SORT_TRACK_MSG__MSG__DETAIL__TARGETS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "sort_track_msg/msg/detail/target__struct.h"

// Struct defined in msg/Targets in the package sort_track_msg.
typedef struct sort_track_msg__msg__Targets
{
  std_msgs__msg__Header header;
  sort_track_msg__msg__Target__Sequence data;
} sort_track_msg__msg__Targets;

// Struct for a sequence of sort_track_msg__msg__Targets.
typedef struct sort_track_msg__msg__Targets__Sequence
{
  sort_track_msg__msg__Targets * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sort_track_msg__msg__Targets__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TARGETS__STRUCT_H_
