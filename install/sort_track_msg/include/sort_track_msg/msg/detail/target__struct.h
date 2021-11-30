// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sort_track_msg:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TARGET__STRUCT_H_
#define SORT_TRACK_MSG__MSG__DETAIL__TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Target in the package sort_track_msg.
typedef struct sort_track_msg__msg__Target
{
  int16_t id;
  float x;
  float y;
  float vx;
  float vy;
  int64_t xmin;
  int64_t ymin;
  int64_t xmax;
  int64_t ymax;
} sort_track_msg__msg__Target;

// Struct for a sequence of sort_track_msg__msg__Target.
typedef struct sort_track_msg__msg__Target__Sequence
{
  sort_track_msg__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sort_track_msg__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TARGET__STRUCT_H_
