// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tank_interfaces/msg/detail/motion_demand__rosidl_typesupport_introspection_c.h"
#include "tank_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tank_interfaces/msg/detail/motion_demand__functions.h"
#include "tank_interfaces/msg/detail/motion_demand__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tank_interfaces__msg__MotionDemand__init(message_memory);
}

void tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_fini_function(void * message_memory)
{
  tank_interfaces__msg__MotionDemand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_message_member_array[2] = {
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tank_interfaces__msg__MotionDemand, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "forward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tank_interfaces__msg__MotionDemand, forward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_message_members = {
  "tank_interfaces__msg",  // message namespace
  "MotionDemand",  // message name
  2,  // number of fields
  sizeof(tank_interfaces__msg__MotionDemand),
  false,  // has_any_key_member_
  tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_message_member_array,  // message members
  tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_init_function,  // function to initialize message memory (memory has to be allocated)
  tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_message_type_support_handle = {
  0,
  &tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_message_members,
  get_message_typesupport_handle_function,
  &tank_interfaces__msg__MotionDemand__get_type_hash,
  &tank_interfaces__msg__MotionDemand__get_type_description,
  &tank_interfaces__msg__MotionDemand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tank_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, msg, MotionDemand)() {
  if (!tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_message_type_support_handle.typesupport_identifier) {
    tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tank_interfaces__msg__MotionDemand__rosidl_typesupport_introspection_c__MotionDemand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
