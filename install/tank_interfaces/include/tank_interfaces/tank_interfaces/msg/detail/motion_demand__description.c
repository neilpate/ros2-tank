// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice

#include "tank_interfaces/msg/detail/motion_demand__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tank_interfaces
const rosidl_type_hash_t *
tank_interfaces__msg__MotionDemand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0xfb, 0x6c, 0x79, 0xd8, 0x2f, 0x1c, 0xe7,
      0x0d, 0x9a, 0xb7, 0xa1, 0x6c, 0x5c, 0x4b, 0xd5,
      0xcd, 0xf1, 0x55, 0x9e, 0xc9, 0xc3, 0xbc, 0xa4,
      0x54, 0x1e, 0x7d, 0x40, 0xb3, 0x0a, 0xfc, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tank_interfaces__msg__MotionDemand__TYPE_NAME[] = "tank_interfaces/msg/MotionDemand";

// Define type names, field names, and default values
static char tank_interfaces__msg__MotionDemand__FIELD_NAME__yaw[] = "yaw";
static char tank_interfaces__msg__MotionDemand__FIELD_NAME__forward[] = "forward";

static rosidl_runtime_c__type_description__Field tank_interfaces__msg__MotionDemand__FIELDS[] = {
  {
    {tank_interfaces__msg__MotionDemand__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tank_interfaces__msg__MotionDemand__FIELD_NAME__forward, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tank_interfaces__msg__MotionDemand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tank_interfaces__msg__MotionDemand__TYPE_NAME, 32, 32},
      {tank_interfaces__msg__MotionDemand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 yaw\n"
  "int64 forward";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tank_interfaces__msg__MotionDemand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tank_interfaces__msg__MotionDemand__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tank_interfaces__msg__MotionDemand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tank_interfaces__msg__MotionDemand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
