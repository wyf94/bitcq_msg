// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sort_track_msg:msg/Tracks.idl
// generated code does not contain a copyright notice
#include "sort_track_msg/msg/detail/tracks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bounding_boxes`
#include "sort_track_msg/msg/detail/bounding_box__functions.h"

bool
sort_track_msg__msg__Tracks__init(sort_track_msg__msg__Tracks * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sort_track_msg__msg__Tracks__fini(msg);
    return false;
  }
  // bounding_boxes
  if (!sort_track_msg__msg__BoundingBox__Sequence__init(&msg->bounding_boxes, 0)) {
    sort_track_msg__msg__Tracks__fini(msg);
    return false;
  }
  return true;
}

void
sort_track_msg__msg__Tracks__fini(sort_track_msg__msg__Tracks * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bounding_boxes
  sort_track_msg__msg__BoundingBox__Sequence__fini(&msg->bounding_boxes);
}

sort_track_msg__msg__Tracks *
sort_track_msg__msg__Tracks__create()
{
  sort_track_msg__msg__Tracks * msg = (sort_track_msg__msg__Tracks *)malloc(sizeof(sort_track_msg__msg__Tracks));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sort_track_msg__msg__Tracks));
  bool success = sort_track_msg__msg__Tracks__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sort_track_msg__msg__Tracks__destroy(sort_track_msg__msg__Tracks * msg)
{
  if (msg) {
    sort_track_msg__msg__Tracks__fini(msg);
  }
  free(msg);
}


bool
sort_track_msg__msg__Tracks__Sequence__init(sort_track_msg__msg__Tracks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sort_track_msg__msg__Tracks * data = NULL;
  if (size) {
    data = (sort_track_msg__msg__Tracks *)calloc(size, sizeof(sort_track_msg__msg__Tracks));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sort_track_msg__msg__Tracks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sort_track_msg__msg__Tracks__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sort_track_msg__msg__Tracks__Sequence__fini(sort_track_msg__msg__Tracks__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sort_track_msg__msg__Tracks__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sort_track_msg__msg__Tracks__Sequence *
sort_track_msg__msg__Tracks__Sequence__create(size_t size)
{
  sort_track_msg__msg__Tracks__Sequence * array = (sort_track_msg__msg__Tracks__Sequence *)malloc(sizeof(sort_track_msg__msg__Tracks__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sort_track_msg__msg__Tracks__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sort_track_msg__msg__Tracks__Sequence__destroy(sort_track_msg__msg__Tracks__Sequence * array)
{
  if (array) {
    sort_track_msg__msg__Tracks__Sequence__fini(array);
  }
  free(array);
}
