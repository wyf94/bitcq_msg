// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sort_track_msg:msg/Targets.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sort_track_msg/msg/detail/targets__rosidl_typesupport_introspection_c.h"
#include "sort_track_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sort_track_msg/msg/detail/targets__functions.h"
#include "sort_track_msg/msg/detail/targets__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "sort_track_msg/msg/target.h"
// Member `data`
#include "sort_track_msg/msg/detail/target__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Targets__rosidl_typesupport_introspection_c__Targets_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sort_track_msg__msg__Targets__init(message_memory);
}

void Targets__rosidl_typesupport_introspection_c__Targets_fini_function(void * message_memory)
{
  sort_track_msg__msg__Targets__fini(message_memory);
}

size_t Targets__rosidl_typesupport_introspection_c__size_function__Target__data(
  const void * untyped_member)
{
  const sort_track_msg__msg__Target__Sequence * member =
    (const sort_track_msg__msg__Target__Sequence *)(untyped_member);
  return member->size;
}

const void * Targets__rosidl_typesupport_introspection_c__get_const_function__Target__data(
  const void * untyped_member, size_t index)
{
  const sort_track_msg__msg__Target__Sequence * member =
    (const sort_track_msg__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Targets__rosidl_typesupport_introspection_c__get_function__Target__data(
  void * untyped_member, size_t index)
{
  sort_track_msg__msg__Target__Sequence * member =
    (sort_track_msg__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Targets__rosidl_typesupport_introspection_c__resize_function__Target__data(
  void * untyped_member, size_t size)
{
  sort_track_msg__msg__Target__Sequence * member =
    (sort_track_msg__msg__Target__Sequence *)(untyped_member);
  sort_track_msg__msg__Target__Sequence__fini(member);
  return sort_track_msg__msg__Target__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Targets__rosidl_typesupport_introspection_c__Targets_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sort_track_msg__msg__Targets, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sort_track_msg__msg__Targets, data),  // bytes offset in struct
    NULL,  // default value
    Targets__rosidl_typesupport_introspection_c__size_function__Target__data,  // size() function pointer
    Targets__rosidl_typesupport_introspection_c__get_const_function__Target__data,  // get_const(index) function pointer
    Targets__rosidl_typesupport_introspection_c__get_function__Target__data,  // get(index) function pointer
    Targets__rosidl_typesupport_introspection_c__resize_function__Target__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Targets__rosidl_typesupport_introspection_c__Targets_message_members = {
  "sort_track_msg__msg",  // message namespace
  "Targets",  // message name
  2,  // number of fields
  sizeof(sort_track_msg__msg__Targets),
  Targets__rosidl_typesupport_introspection_c__Targets_message_member_array,  // message members
  Targets__rosidl_typesupport_introspection_c__Targets_init_function,  // function to initialize message memory (memory has to be allocated)
  Targets__rosidl_typesupport_introspection_c__Targets_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Targets__rosidl_typesupport_introspection_c__Targets_message_type_support_handle = {
  0,
  &Targets__rosidl_typesupport_introspection_c__Targets_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sort_track_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sort_track_msg, msg, Targets)() {
  Targets__rosidl_typesupport_introspection_c__Targets_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Targets__rosidl_typesupport_introspection_c__Targets_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sort_track_msg, msg, Target)();
  if (!Targets__rosidl_typesupport_introspection_c__Targets_message_type_support_handle.typesupport_identifier) {
    Targets__rosidl_typesupport_introspection_c__Targets_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Targets__rosidl_typesupport_introspection_c__Targets_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
