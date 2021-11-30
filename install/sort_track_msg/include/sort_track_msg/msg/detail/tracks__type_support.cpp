// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sort_track_msg:msg/Tracks.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sort_track_msg/msg/detail/tracks__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sort_track_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Tracks_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sort_track_msg::msg::Tracks(_init);
}

void Tracks_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sort_track_msg::msg::Tracks *>(message_memory);
  typed_message->~Tracks();
}

size_t size_function__Tracks__bounding_boxes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sort_track_msg::msg::BoundingBox> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tracks__bounding_boxes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sort_track_msg::msg::BoundingBox> *>(untyped_member);
  return &member[index];
}

void * get_function__Tracks__bounding_boxes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sort_track_msg::msg::BoundingBox> *>(untyped_member);
  return &member[index];
}

void resize_function__Tracks__bounding_boxes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sort_track_msg::msg::BoundingBox> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Tracks_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sort_track_msg::msg::Tracks, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounding_boxes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sort_track_msg::msg::BoundingBox>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sort_track_msg::msg::Tracks, bounding_boxes),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tracks__bounding_boxes,  // size() function pointer
    get_const_function__Tracks__bounding_boxes,  // get_const(index) function pointer
    get_function__Tracks__bounding_boxes,  // get(index) function pointer
    resize_function__Tracks__bounding_boxes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Tracks_message_members = {
  "sort_track_msg::msg",  // message namespace
  "Tracks",  // message name
  2,  // number of fields
  sizeof(sort_track_msg::msg::Tracks),
  Tracks_message_member_array,  // message members
  Tracks_init_function,  // function to initialize message memory (memory has to be allocated)
  Tracks_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Tracks_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Tracks_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sort_track_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sort_track_msg::msg::Tracks>()
{
  return &::sort_track_msg::msg::rosidl_typesupport_introspection_cpp::Tracks_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sort_track_msg, msg, Tracks)() {
  return &::sort_track_msg::msg::rosidl_typesupport_introspection_cpp::Tracks_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
