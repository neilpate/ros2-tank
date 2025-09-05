// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tank_interfaces/msg/detail/motion_demand__functions.h"
#include "tank_interfaces/msg/detail/motion_demand__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tank_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotionDemand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tank_interfaces::msg::MotionDemand(_init);
}

void MotionDemand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tank_interfaces::msg::MotionDemand *>(message_memory);
  typed_message->~MotionDemand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionDemand_message_member_array[2] = {
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tank_interfaces::msg::MotionDemand, yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "forward",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tank_interfaces::msg::MotionDemand, forward),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionDemand_message_members = {
  "tank_interfaces::msg",  // message namespace
  "MotionDemand",  // message name
  2,  // number of fields
  sizeof(tank_interfaces::msg::MotionDemand),
  false,  // has_any_key_member_
  MotionDemand_message_member_array,  // message members
  MotionDemand_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionDemand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionDemand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionDemand_message_members,
  get_message_typesupport_handle_function,
  &tank_interfaces__msg__MotionDemand__get_type_hash,
  &tank_interfaces__msg__MotionDemand__get_type_description,
  &tank_interfaces__msg__MotionDemand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tank_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tank_interfaces::msg::MotionDemand>()
{
  return &::tank_interfaces::msg::rosidl_typesupport_introspection_cpp::MotionDemand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tank_interfaces, msg, MotionDemand)() {
  return &::tank_interfaces::msg::rosidl_typesupport_introspection_cpp::MotionDemand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
