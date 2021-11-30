// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sort_track_msg:msg/BoundingBox.idl
// generated code does not contain a copyright notice
#include "sort_track_msg/msg/detail/bounding_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
sort_track_msg__msg__BoundingBox__init(sort_track_msg__msg__BoundingBox * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // xmin
  // ymin
  // xmax
  // ymax
  return true;
}

void
sort_track_msg__msg__BoundingBox__fini(sort_track_msg__msg__BoundingBox * msg)
{
  if (!msg) {
    return;
  }
  // id
  // xmin
  // ymin
  // xmax
  // ymax
}

sort_track_msg__msg__BoundingBox *
sort_track_msg__msg__BoundingBox__create()
{
  sort_track_msg__msg__BoundingBox * msg = (sort_track_msg__msg__BoundingBox *)malloc(sizeof(sort_track_msg__msg__BoundingBox));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sort_track_msg__msg__BoundingBox));
  bool success = sort_track_msg__msg__BoundingBox__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sort_track_msg__msg__BoundingBox__destroy(sort_track_msg__msg__BoundingBox * msg)
{
  if (msg) {
    sort_track_msg__msg__BoundingBox__fini(msg);
  }
  free(msg);
}


bool
sort_track_msg__msg__BoundingBox__Sequence__init(sort_track_msg__msg__BoundingBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sort_track_msg__msg__BoundingBox * data = NULL;
  if (size) {
    data = (sort_track_msg__msg__BoundingBox *)calloc(size, sizeof(sort_track_msg__msg__BoundingBox));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sort_track_msg__msg__BoundingBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sort_track_msg__msg__BoundingBox__fini(&data[i - 1]);
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
sort_track_msg__msg__BoundingBox__Sequence__fini(sort_track_msg__msg__BoundingBox__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sort_track_msg__msg__BoundingBox__fini(&array->data[i]);
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

sort_track_msg__msg__BoundingBox__Sequence *
sort_track_msg__msg__BoundingBox__Sequence__create(size_t size)
{
  sort_track_msg__msg__BoundingBox__Sequence * array = (sort_track_msg__msg__BoundingBox__Sequence *)malloc(sizeof(sort_track_msg__msg__BoundingBox__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sort_track_msg__msg__BoundingBox__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sort_track_msg__msg__BoundingBox__Sequence__destroy(sort_track_msg__msg__BoundingBox__Sequence * array)
{
  if (array) {
    sort_track_msg__msg__BoundingBox__Sequence__fini(array);
  }
  free(array);
}
