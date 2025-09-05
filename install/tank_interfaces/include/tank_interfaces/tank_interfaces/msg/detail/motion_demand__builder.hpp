// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tank_interfaces/msg/motion_demand.hpp"


#ifndef TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__BUILDER_HPP_
#define TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tank_interfaces/msg/detail/motion_demand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tank_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotionDemand_forward
{
public:
  explicit Init_MotionDemand_forward(::tank_interfaces::msg::MotionDemand & msg)
  : msg_(msg)
  {}
  ::tank_interfaces::msg::MotionDemand forward(::tank_interfaces::msg::MotionDemand::_forward_type arg)
  {
    msg_.forward = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tank_interfaces::msg::MotionDemand msg_;
};

class Init_MotionDemand_yaw
{
public:
  Init_MotionDemand_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionDemand_forward yaw(::tank_interfaces::msg::MotionDemand::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_MotionDemand_forward(msg_);
  }

private:
  ::tank_interfaces::msg::MotionDemand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tank_interfaces::msg::MotionDemand>()
{
  return tank_interfaces::msg::builder::Init_MotionDemand_yaw();
}

}  // namespace tank_interfaces

#endif  // TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__BUILDER_HPP_
