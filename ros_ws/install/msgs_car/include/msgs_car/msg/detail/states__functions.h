// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msgs_car:msg/States.idl
// generated code does not contain a copyright notice

#ifndef MSGS_CAR__MSG__DETAIL__STATES__FUNCTIONS_H_
#define MSGS_CAR__MSG__DETAIL__STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msgs_car/msg/rosidl_generator_c__visibility_control.h"

#include "msgs_car/msg/detail/states__struct.h"

/// Initialize msg/States message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs_car__msg__States
 * )) before or use
 * msgs_car__msg__States__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_car
bool
msgs_car__msg__States__init(msgs_car__msg__States * msg);

/// Finalize msg/States message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_car
void
msgs_car__msg__States__fini(msgs_car__msg__States * msg);

/// Create msg/States message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs_car__msg__States__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_car
msgs_car__msg__States *
msgs_car__msg__States__create();

/// Destroy msg/States message.
/**
 * It calls
 * msgs_car__msg__States__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_car
void
msgs_car__msg__States__destroy(msgs_car__msg__States * msg);


/// Initialize array of msg/States messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs_car__msg__States__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_car
bool
msgs_car__msg__States__Sequence__init(msgs_car__msg__States__Sequence * array, size_t size);

/// Finalize array of msg/States messages.
/**
 * It calls
 * msgs_car__msg__States__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_car
void
msgs_car__msg__States__Sequence__fini(msgs_car__msg__States__Sequence * array);

/// Create array of msg/States messages.
/**
 * It allocates the memory for the array and calls
 * msgs_car__msg__States__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_car
msgs_car__msg__States__Sequence *
msgs_car__msg__States__Sequence__create(size_t size);

/// Destroy array of msg/States messages.
/**
 * It calls
 * msgs_car__msg__States__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_car
void
msgs_car__msg__States__Sequence__destroy(msgs_car__msg__States__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MSGS_CAR__MSG__DETAIL__STATES__FUNCTIONS_H_
