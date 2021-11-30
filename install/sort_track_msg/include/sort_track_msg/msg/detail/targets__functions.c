// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sort_track_msg:msg/Targets.idl
// generated code does not contain a copyright notice
#include "sort_track_msg/msg/detail/targets__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "sort_track_msg/msg/detail/target__functions.h"

bool
sort_track_msg__msg__Targets__init(sort_track_msg__msg__Targets * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sort_track_msg__msg__Targets__fini(msg);
    return false;
  }
  // data
  if (!sort_track_msg__msg__Target__Sequence__init(&msg->data, 0)) {
    sort_track_msg__msg__Targets__fini(msg);
    return false;
  }
  return true;
}

void
sort_track_msg__msg__Targets__fini(sort_track_msg__msg__Targets * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  sort_track_msg__msg__Target__Sequence__fini(&msg->data);
}

sort_track_msg__msg__Targets *
sort_track_msg__msg__Targets__create()
{
  sort_track_msg__msg__Targets * msg = (sort_track_msg__msg__Targets *)malloc(sizeof(sort_track_msg__msg__Targets));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sort_track_msg__msg__Targets));
  bool success = sort_track_msg__msg__Targets__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sort_track_msg__msg__Targets__destroy(sort_track_msg__msg__Targets * msg)
{
  if (msg) {
    sort_track_msg__msg__Targets__fini(msg);
  }
  free(msg);
}


bool
sort_track_msg__msg__Targets__Sequence__init(sort_track_msg__msg__Targets__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sort_track_msg__msg__Targets * data = NULL;
  if (size) {
    data = (sort_track_msg__msg__Targets *)calloc(size, sizeof(sort_track_msg__msg__Targets));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sort_track_msg__msg__Targets__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sort_track_msg__msg__Targets__fini(&data[i - 1]);
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
sort_track_msg__msg__Targets__Sequence__fini(sort_track_msg__msg__Targets__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sort_track_msg__msg__Targets__fini(&array->data[i]);
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

sort_track_msg__msg__Targets__Sequence *
sort_track_msg__msg__Targets__Sequence__create(size_t size)
{
  sort_track_msg__msg__Targets__Sequence * array = (sort_track_msg__msg__Targets__Sequence *)malloc(sizeof(sort_track_msg__msg__Targets__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sort_track_msg__msg__Targets__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sort_track_msg__msg__Targets__Sequence__destroy(sort_track_msg__msg__Targets__Sequence * array)
{
  if (array) {
    sort_track_msg__msg__Targets__Sequence__fini(array);
  }
  free(array);
}
