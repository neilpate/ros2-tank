// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tank_interfaces/msg/motion_demand.h"


#ifndef TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__STRUCT_H_
#define TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotionDemand in the package tank_interfaces.
typedef struct tank_interfaces__msg__MotionDemand
{
  int64_t yaw;
  int64_t forward;
} tank_interfaces__msg__MotionDemand;

// Struct for a sequence of tank_interfaces__msg__MotionDemand.
typedef struct tank_interfaces__msg__MotionDemand__Sequence
{
  tank_interfaces__msg__MotionDemand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tank_interfaces__msg__MotionDemand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__STRUCT_H_
