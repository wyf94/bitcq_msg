// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sort_track_msg:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef SORT_TRACK_MSG__MSG__DETAIL__TARGET__FUNCTIONS_H_
#define SORT_TRACK_MSG__MSG__DETAIL__TARGET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sort_track_msg/msg/rosidl_generator_c__visibility_control.h"

#include "sort_track_msg/msg/detail/target__struct.h"

/// Initialize msg/Target message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sort_track_msg__msg__Target
 * )) before or use
 * sort_track_msg__msg__Target__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sort_track_msg
bool
sort_track_msg__msg__Target__init(sort_track_msg__msg__Target * msg);

/// Finalize msg/Target message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sort_track_msg
void
sort_track_msg__msg__Target__fini(sort_track_msg__msg__Target * msg);

/// Create msg/Target message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sort_track_msg__msg__Target__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sort_track_msg
sort_track_msg__msg__Target *
sort_track_msg__msg__Target__create();

/// Destroy msg/Target message.
/**
 * It calls
 * sort_track_msg__msg__Target__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sort_track_msg
void
sort_track_msg__msg__Target__destroy(sort_track_msg__msg__Target * msg);


/// Initialize array of msg/Target messages.
/**
 * It allocates the memory for the number of elements and calls
 * sort_track_msg__msg__Target__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sort_track_msg
bool
sort_track_msg__msg__Target__Sequence__init(sort_track_msg__msg__Target__Sequence * array, size_t size);

/// Finalize array of msg/Target messages.
/**
 * It calls
 * sort_track_msg__msg__Target__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sort_track_msg
void
sort_track_msg__msg__Target__Sequence__fini(sort_track_msg__msg__Target__Sequence * array);

/// Create array of msg/Target messages.
/**
 * It allocates the memory for the array and calls
 * sort_track_msg__msg__Target__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sort_track_msg
sort_track_msg__msg__Target__Sequence *
sort_track_msg__msg__Target__Sequence__create(size_t size);

/// Destroy array of msg/Target messages.
/**
 * It calls
 * sort_track_msg__msg__Target__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sort_track_msg
void
sort_track_msg__msg__Target__Sequence__destroy(sort_track_msg__msg__Target__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SORT_TRACK_MSG__MSG__DETAIL__TARGET__FUNCTIONS_H_
