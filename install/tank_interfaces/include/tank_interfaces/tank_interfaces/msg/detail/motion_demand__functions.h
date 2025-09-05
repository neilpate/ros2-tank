// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tank_interfaces/msg/motion_demand.h"


#ifndef TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__FUNCTIONS_H_
#define TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "tank_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "tank_interfaces/msg/detail/motion_demand__struct.h"

/// Initialize msg/MotionDemand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tank_interfaces__msg__MotionDemand
 * )) before or use
 * tank_interfaces__msg__MotionDemand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
bool
tank_interfaces__msg__MotionDemand__init(tank_interfaces__msg__MotionDemand * msg);

/// Finalize msg/MotionDemand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
void
tank_interfaces__msg__MotionDemand__fini(tank_interfaces__msg__MotionDemand * msg);

/// Create msg/MotionDemand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tank_interfaces__msg__MotionDemand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
tank_interfaces__msg__MotionDemand *
tank_interfaces__msg__MotionDemand__create(void);

/// Destroy msg/MotionDemand message.
/**
 * It calls
 * tank_interfaces__msg__MotionDemand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
void
tank_interfaces__msg__MotionDemand__destroy(tank_interfaces__msg__MotionDemand * msg);

/// Check for msg/MotionDemand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
bool
tank_interfaces__msg__MotionDemand__are_equal(const tank_interfaces__msg__MotionDemand * lhs, const tank_interfaces__msg__MotionDemand * rhs);

/// Copy a msg/MotionDemand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
bool
tank_interfaces__msg__MotionDemand__copy(
  const tank_interfaces__msg__MotionDemand * input,
  tank_interfaces__msg__MotionDemand * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
const rosidl_type_hash_t *
tank_interfaces__msg__MotionDemand__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
tank_interfaces__msg__MotionDemand__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
const rosidl_runtime_c__type_description__TypeSource *
tank_interfaces__msg__MotionDemand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
tank_interfaces__msg__MotionDemand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MotionDemand messages.
/**
 * It allocates the memory for the number of elements and calls
 * tank_interfaces__msg__MotionDemand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
bool
tank_interfaces__msg__MotionDemand__Sequence__init(tank_interfaces__msg__MotionDemand__Sequence * array, size_t size);

/// Finalize array of msg/MotionDemand messages.
/**
 * It calls
 * tank_interfaces__msg__MotionDemand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
void
tank_interfaces__msg__MotionDemand__Sequence__fini(tank_interfaces__msg__MotionDemand__Sequence * array);

/// Create array of msg/MotionDemand messages.
/**
 * It allocates the memory for the array and calls
 * tank_interfaces__msg__MotionDemand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
tank_interfaces__msg__MotionDemand__Sequence *
tank_interfaces__msg__MotionDemand__Sequence__create(size_t size);

/// Destroy array of msg/MotionDemand messages.
/**
 * It calls
 * tank_interfaces__msg__MotionDemand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
void
tank_interfaces__msg__MotionDemand__Sequence__destroy(tank_interfaces__msg__MotionDemand__Sequence * array);

/// Check for msg/MotionDemand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
bool
tank_interfaces__msg__MotionDemand__Sequence__are_equal(const tank_interfaces__msg__MotionDemand__Sequence * lhs, const tank_interfaces__msg__MotionDemand__Sequence * rhs);

/// Copy an array of msg/MotionDemand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
bool
tank_interfaces__msg__MotionDemand__Sequence__copy(
  const tank_interfaces__msg__MotionDemand__Sequence * input,
  tank_interfaces__msg__MotionDemand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__FUNCTIONS_H_
