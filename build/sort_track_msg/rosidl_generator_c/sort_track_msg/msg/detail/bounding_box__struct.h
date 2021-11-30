// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sort_track_msg:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
#define SORT_TRACK_MSG__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BoundingBox in the package sort_track_msg.
typedef struct sort_track_msg__msg__BoundingBox
{
  int16_t id;
  int64_t xmin;
  int64_t ymin;
  int64_t xmax;
  int64_t ymax;
} sort_track_msg__msg__BoundingBox;

// Struct for a sequence of sort_track_msg__msg__BoundingBox.
typedef struct sort_track_msg__msg__BoundingBox__Sequence
{
  sort_track_msg__msg__BoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sort_track_msg__msg__BoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SORT_TRACK_MSG__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
