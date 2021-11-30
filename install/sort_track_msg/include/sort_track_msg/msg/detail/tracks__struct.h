// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sort_track_msg:msg/Tracks.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TRACKS__STRUCT_H_
#define SORT_TRACK_MSG__MSG__DETAIL__TRACKS__STRUCT_H_

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
// Member 'bounding_boxes'
#include "sort_track_msg/msg/detail/bounding_box__struct.h"

// Struct defined in msg/Tracks in the package sort_track_msg.
typedef struct sort_track_msg__msg__Tracks
{
  std_msgs__msg__Header header;
  sort_track_msg__msg__BoundingBox__Sequence bounding_boxes;
} sort_track_msg__msg__Tracks;

// Struct for a sequence of sort_track_msg__msg__Tracks.
typedef struct sort_track_msg__msg__Tracks__Sequence
{
  sort_track_msg__msg__Tracks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sort_track_msg__msg__Tracks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TRACKS__STRUCT_H_
