// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sort_track_msg:msg/Targets.idl
// generated code does not contain a copyright notice
#include "sort_track_msg/msg/detail/targets__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sort_track_msg/msg/detail/targets__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sort_track_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sort_track_msg::msg::Target &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sort_track_msg::msg::Target &);
size_t get_serialized_size(
  const sort_track_msg::msg::Target &,
  size_t current_alignment);
size_t
max_serialized_size_Target(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sort_track_msg


namespace sort_track_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sort_track_msg
cdr_serialize(
  const sort_track_msg::msg::Targets & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: data
  {
    size_t size = ros_message.data.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      sort_track_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.data[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sort_track_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sort_track_msg::msg::Targets & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.data.resize(size);
    for (size_t i = 0; i < size; i++) {
      sort_track_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.data[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sort_track_msg
get_serialized_size(
  const sort_track_msg::msg::Targets & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: data
  {
    size_t array_size = ros_message.data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sort_track_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.data[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sort_track_msg
max_serialized_size_Targets(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sort_track_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_Target(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Targets__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sort_track_msg::msg::Targets *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Targets__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sort_track_msg::msg::Targets *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Targets__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sort_track_msg::msg::Targets *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Targets__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Targets(full_bounded, 0);
}

static message_type_support_callbacks_t _Targets__callbacks = {
  "sort_track_msg::msg",
  "Targets",
  _Targets__cdr_serialize,
  _Targets__cdr_deserialize,
  _Targets__get_serialized_size,
  _Targets__max_serialized_size
};

static rosidl_message_type_support_t _Targets__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Targets__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sort_track_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sort_track_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<sort_track_msg::msg::Targets>()
{
  return &sort_track_msg::msg::typesupport_fastrtps_cpp::_Targets__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sort_track_msg, msg, Targets)() {
  return &sort_track_msg::msg::typesupport_fastrtps_cpp::_Targets__handle;
}

#ifdef __cplusplus
}
#endif
