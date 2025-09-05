// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tank_interfaces:msg/MotionDemand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tank_interfaces/msg/motion_demand.hpp"


#ifndef TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__TRAITS_HPP_
#define TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tank_interfaces/msg/detail/motion_demand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tank_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionDemand & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: forward
  {
    out << "forward: ";
    rosidl_generator_traits::value_to_yaml(msg.forward, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionDemand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: forward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward: ";
    rosidl_generator_traits::value_to_yaml(msg.forward, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionDemand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tank_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tank_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tank_interfaces::msg::MotionDemand & msg,
  std::ostream & out, size_t indentation = 0)
{
  tank_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tank_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const tank_interfaces::msg::MotionDemand & msg)
{
  return tank_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tank_interfaces::msg::MotionDemand>()
{
  return "tank_interfaces::msg::MotionDemand";
}

template<>
inline const char * name<tank_interfaces::msg::MotionDemand>()
{
  return "tank_interfaces/msg/MotionDemand";
}

template<>
struct has_fixed_size<tank_interfaces::msg::MotionDemand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tank_interfaces::msg::MotionDemand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tank_interfaces::msg::MotionDemand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TANK_INTERFACES__MSG__DETAIL__MOTION_DEMAND__TRAITS_HPP_
