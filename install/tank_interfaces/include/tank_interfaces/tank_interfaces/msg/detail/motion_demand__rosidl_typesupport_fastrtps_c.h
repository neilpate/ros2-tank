// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice
#ifndef TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tank_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tank_interfaces/msg/detail/motion_demand__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tank_interfaces
bool cdr_serialize_tank_interfaces__msg__MotionDemand(
  const tank_interfaces__msg__MotionDemand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tank_interfaces
bool cdr_deserialize_tank_interfaces__msg__MotionDemand(
  eprosima::fastcdr::Cdr &,
  tank_interfaces__msg__MotionDemand * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tank_interfaces
size_t get_serialized_size_tank_interfaces__msg__MotionDemand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tank_interfaces
size_t max_serialized_size_tank_interfaces__msg__MotionDemand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tank_interfaces
bool cdr_serialize_key_tank_interfaces__msg__MotionDemand(
  const tank_interfaces__msg__MotionDemand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tank_interfaces
size_t get_serialized_size_key_tank_interfaces__msg__MotionDemand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tank_interfaces
size_t max_serialized_size_key_tank_interfaces__msg__MotionDemand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tank_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tank_interfaces, msg, MotionDemand)();

#ifdef __cplusplus
}
#endif

#endif  // TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
