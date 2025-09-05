// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tank_interfaces/msg/motion_demand.hpp"


#ifndef TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__STRUCT_HPP_
#define TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tank_interfaces__msg__MotionDemand __attribute__((deprecated))
#else
# define DEPRECATED__tank_interfaces__msg__MotionDemand __declspec(deprecated)
#endif

namespace tank_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionDemand_
{
  using Type = MotionDemand_<ContainerAllocator>;

  explicit MotionDemand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0ll;
      this->forward = 0ll;
    }
  }

  explicit MotionDemand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0ll;
      this->forward = 0ll;
    }
  }

  // field types and members
  using _yaw_type =
    int64_t;
  _yaw_type yaw;
  using _forward_type =
    int64_t;
  _forward_type forward;

  // setters for named parameter idiom
  Type & set__yaw(
    const int64_t & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__forward(
    const int64_t & _arg)
  {
    this->forward = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tank_interfaces::msg::MotionDemand_<ContainerAllocator> *;
  using ConstRawPtr =
    const tank_interfaces::msg::MotionDemand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tank_interfaces::msg::MotionDemand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tank_interfaces::msg::MotionDemand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tank_interfaces::msg::MotionDemand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tank_interfaces::msg::MotionDemand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tank_interfaces::msg::MotionDemand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tank_interfaces::msg::MotionDemand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tank_interfaces::msg::MotionDemand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tank_interfaces::msg::MotionDemand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tank_interfaces__msg__MotionDemand
    std::shared_ptr<tank_interfaces::msg::MotionDemand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tank_interfaces__msg__MotionDemand
    std::shared_ptr<tank_interfaces::msg::MotionDemand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionDemand_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->forward != other.forward) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionDemand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionDemand_

// alias to use template instance with default allocator
using MotionDemand =
  tank_interfaces::msg::MotionDemand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tank_interfaces

#endif  // TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__STRUCT_HPP_
