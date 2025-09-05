// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice
#include "tank_interfaces/msg/detail/motion_demand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tank_interfaces__msg__MotionDemand__init(tank_interfaces__msg__MotionDemand * msg)
{
  if (!msg) {
    return false;
  }
  // yaw
  // forward
  return true;
}

void
tank_interfaces__msg__MotionDemand__fini(tank_interfaces__msg__MotionDemand * msg)
{
  if (!msg) {
    return;
  }
  // yaw
  // forward
}

bool
tank_interfaces__msg__MotionDemand__are_equal(const tank_interfaces__msg__MotionDemand * lhs, const tank_interfaces__msg__MotionDemand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // forward
  if (lhs->forward != rhs->forward) {
    return false;
  }
  return true;
}

bool
tank_interfaces__msg__MotionDemand__copy(
  const tank_interfaces__msg__MotionDemand * input,
  tank_interfaces__msg__MotionDemand * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // forward
  output->forward = input->forward;
  return true;
}

tank_interfaces__msg__MotionDemand *
tank_interfaces__msg__MotionDemand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tank_interfaces__msg__MotionDemand * msg = (tank_interfaces__msg__MotionDemand *)allocator.allocate(sizeof(tank_interfaces__msg__MotionDemand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tank_interfaces__msg__MotionDemand));
  bool success = tank_interfaces__msg__MotionDemand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tank_interfaces__msg__MotionDemand__destroy(tank_interfaces__msg__MotionDemand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tank_interfaces__msg__MotionDemand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tank_interfaces__msg__MotionDemand__Sequence__init(tank_interfaces__msg__MotionDemand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tank_interfaces__msg__MotionDemand * data = NULL;

  if (size) {
    data = (tank_interfaces__msg__MotionDemand *)allocator.zero_allocate(size, sizeof(tank_interfaces__msg__MotionDemand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tank_interfaces__msg__MotionDemand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tank_interfaces__msg__MotionDemand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tank_interfaces__msg__MotionDemand__Sequence__fini(tank_interfaces__msg__MotionDemand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tank_interfaces__msg__MotionDemand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tank_interfaces__msg__MotionDemand__Sequence *
tank_interfaces__msg__MotionDemand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tank_interfaces__msg__MotionDemand__Sequence * array = (tank_interfaces__msg__MotionDemand__Sequence *)allocator.allocate(sizeof(tank_interfaces__msg__MotionDemand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tank_interfaces__msg__MotionDemand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tank_interfaces__msg__MotionDemand__Sequence__destroy(tank_interfaces__msg__MotionDemand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tank_interfaces__msg__MotionDemand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tank_interfaces__msg__MotionDemand__Sequence__are_equal(const tank_interfaces__msg__MotionDemand__Sequence * lhs, const tank_interfaces__msg__MotionDemand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tank_interfaces__msg__MotionDemand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tank_interfaces__msg__MotionDemand__Sequence__copy(
  const tank_interfaces__msg__MotionDemand__Sequence * input,
  tank_interfaces__msg__MotionDemand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tank_interfaces__msg__MotionDemand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tank_interfaces__msg__MotionDemand * data =
      (tank_interfaces__msg__MotionDemand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tank_interfaces__msg__MotionDemand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tank_interfaces__msg__MotionDemand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tank_interfaces__msg__MotionDemand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
