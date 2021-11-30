// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sort_track_msg:msg/Target.idl
// generated code does not contain a copyright notice
#include "sort_track_msg/msg/detail/target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
sort_track_msg__msg__Target__init(sort_track_msg__msg__Target * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // x
  // y
  // vx
  // vy
  // xmin
  // ymin
  // xmax
  // ymax
  return true;
}

void
sort_track_msg__msg__Target__fini(sort_track_msg__msg__Target * msg)
{
  if (!msg) {
    return;
  }
  // id
  // x
  // y
  // vx
  // vy
  // xmin
  // ymin
  // xmax
  // ymax
}

sort_track_msg__msg__Target *
sort_track_msg__msg__Target__create()
{
  sort_track_msg__msg__Target * msg = (sort_track_msg__msg__Target *)malloc(sizeof(sort_track_msg__msg__Target));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sort_track_msg__msg__Target));
  bool success = sort_track_msg__msg__Target__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sort_track_msg__msg__Target__destroy(sort_track_msg__msg__Target * msg)
{
  if (msg) {
    sort_track_msg__msg__Target__fini(msg);
  }
  free(msg);
}


bool
sort_track_msg__msg__Target__Sequence__init(sort_track_msg__msg__Target__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sort_track_msg__msg__Target * data = NULL;
  if (size) {
    data = (sort_track_msg__msg__Target *)calloc(size, sizeof(sort_track_msg__msg__Target));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sort_track_msg__msg__Target__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sort_track_msg__msg__Target__fini(&data[i - 1]);
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
sort_track_msg__msg__Target__Sequence__fini(sort_track_msg__msg__Target__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sort_track_msg__msg__Target__fini(&array->data[i]);
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

sort_track_msg__msg__Target__Sequence *
sort_track_msg__msg__Target__Sequence__create(size_t size)
{
  sort_track_msg__msg__Target__Sequence * array = (sort_track_msg__msg__Target__Sequence *)malloc(sizeof(sort_track_msg__msg__Target__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sort_track_msg__msg__Target__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sort_track_msg__msg__Target__Sequence__destroy(sort_track_msg__msg__Target__Sequence * array)
{
  if (array) {
    sort_track_msg__msg__Target__Sequence__fini(array);
  }
  free(array);
}
