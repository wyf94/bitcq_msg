// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sort_track_msg:msg/Tracks.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sort_track_msg/msg/detail/tracks__rosidl_typesupport_introspection_c.h"
#include "sort_track_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sort_track_msg/msg/detail/tracks__functions.h"
#include "sort_track_msg/msg/detail/tracks__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bounding_boxes`
#include "sort_track_msg/msg/bounding_box.h"
// Member `bounding_boxes`
#include "sort_track_msg/msg/detail/bounding_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Tracks__rosidl_typesupport_introspection_c__Tracks_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sort_track_msg__msg__Tracks__init(message_memory);
}

void Tracks__rosidl_typesupport_introspection_c__Tracks_fini_function(void * message_memory)
{
  sort_track_msg__msg__Tracks__fini(message_memory);
}

size_t Tracks__rosidl_typesupport_introspection_c__size_function__BoundingBox__bounding_boxes(
  const void * untyped_member)
{
  const sort_track_msg__msg__BoundingBox__Sequence * member =
    (const sort_track_msg__msg__BoundingBox__Sequence *)(untyped_member);
  return member->size;
}

const void * Tracks__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__bounding_boxes(
  const void * untyped_member, size_t index)
{
  const sort_track_msg__msg__BoundingBox__Sequence * member =
    (const sort_track_msg__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Tracks__rosidl_typesupport_introspection_c__get_function__BoundingBox__bounding_boxes(
  void * untyped_member, size_t index)
{
  sort_track_msg__msg__BoundingBox__Sequence * member =
    (sort_track_msg__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Tracks__rosidl_typesupport_introspection_c__resize_function__BoundingBox__bounding_boxes(
  void * untyped_member, size_t size)
{
  sort_track_msg__msg__BoundingBox__Sequence * member =
    (sort_track_msg__msg__BoundingBox__Sequence *)(untyped_member);
  sort_track_msg__msg__BoundingBox__Sequence__fini(member);
  return sort_track_msg__msg__BoundingBox__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Tracks__rosidl_typesupport_introspection_c__Tracks_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sort_track_msg__msg__Tracks, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_boxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sort_track_msg__msg__Tracks, bounding_boxes),  // bytes offset in struct
    NULL,  // default value
    Tracks__rosidl_typesupport_introspection_c__size_function__BoundingBox__bounding_boxes,  // size() function pointer
    Tracks__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__bounding_boxes,  // get_const(index) function pointer
    Tracks__rosidl_typesupport_introspection_c__get_function__BoundingBox__bounding_boxes,  // get(index) function pointer
    Tracks__rosidl_typesupport_introspection_c__resize_function__BoundingBox__bounding_boxes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tracks__rosidl_typesupport_introspection_c__Tracks_message_members = {
  "sort_track_msg__msg",  // message namespace
  "Tracks",  // message name
  2,  // number of fields
  sizeof(sort_track_msg__msg__Tracks),
  Tracks__rosidl_typesupport_introspection_c__Tracks_message_member_array,  // message members
  Tracks__rosidl_typesupport_introspection_c__Tracks_init_function,  // function to initialize message memory (memory has to be allocated)
  Tracks__rosidl_typesupport_introspection_c__Tracks_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tracks__rosidl_typesupport_introspection_c__Tracks_message_type_support_handle = {
  0,
  &Tracks__rosidl_typesupport_introspection_c__Tracks_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sort_track_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sort_track_msg, msg, Tracks)() {
  Tracks__rosidl_typesupport_introspection_c__Tracks_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Tracks__rosidl_typesupport_introspection_c__Tracks_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sort_track_msg, msg, BoundingBox)();
  if (!Tracks__rosidl_typesupport_introspection_c__Tracks_message_type_support_handle.typesupport_identifier) {
    Tracks__rosidl_typesupport_introspection_c__Tracks_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tracks__rosidl_typesupport_introspection_c__Tracks_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
