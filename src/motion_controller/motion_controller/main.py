import rclpy
from rclpy.node import Node
from gpiozero import Motor

from tank_interfaces.msg import MotionDemand

MINIMUM_THRESHOLD = 5  # Minimum absolute value to consider movement


# Define the TankMotion class to control the motors of a tank-like robot
class TankMotion:
    def __init__(self):
        """Initialize the tankMotor class with GPIO pins for the left and right motors."""
        self.left_motor = Motor(
            23, 24
        )  # Initialize the left motor with GPIO pins 23 and 24
        self.right_motor = Motor(
            6, 5
        )  # Initialize the right motor with GPIO pins 6 and 5

    def clamp_zero_to_one(self, value: float) -> float:
        """Clamp the input value to the range [0, 1]."""
        return max(0.0, min(1.0, value))

    def set_left_motor_pwm(self, duty_cycle_percentage: float):
        """Control the left wheel based on the duty cycle value."""
        if duty_cycle_percentage > MINIMUM_THRESHOLD:
            # Move the left motor forward
            pwm = duty_cycle_percentage / 100
            self.left_motor.forward(self.clamp_zero_to_one(pwm))

        elif duty_cycle_percentage < -MINIMUM_THRESHOLD:
            # Move the left motor backward
            pwm = -(duty_cycle_percentage / 100.0)
            self.left_motor.backward(self.clamp_zero_to_one(pwm))
        else:
            self.left_motor.stop()  # Stop the left motor

    def set_right_motor_pwm(self, duty_cycle_percentage: float):
        """Control the right wheel based on the duty cycle value."""
        if duty_cycle_percentage > MINIMUM_THRESHOLD:
            # Move the right motor forward
            pwm = duty_cycle_percentage / 100.0
            self.right_motor.forward(self.clamp_zero_to_one(pwm))

        elif duty_cycle_percentage < -MINIMUM_THRESHOLD:
            # Move the right motor backward
            pwm = -(duty_cycle_percentage / 100.0)
            self.right_motor.backward(self.clamp_zero_to_one(pwm))
        else:
            self.right_motor.stop()  # Stop the right motor

    def apply_motion_demand(self, yaw: float, forward: float):
        # Convert yaw and forward into left and right wheel speeds
        left_wheel_duty_cycle_percentage = -forward - yaw
        right_wheel_duty_cycle_percentage = -forward + yaw

        """Set the duty cycle for both motors and ensure they are within the valid range."""
        self.set_left_motor_pwm(
            left_wheel_duty_cycle_percentage
        )  # Control the left wheel
        self.set_right_motor_pwm(
            right_wheel_duty_cycle_percentage
        )  # Control the right wheel

        # print(f"{self.left_motor.value}, {self.right_motor.value}")

    def close(self):
        """Close the motors to release resources."""
        self.left_motor.close()  # Close the left motor
        self.right_motor.close()  # Close the right motor


class MotionControllerNode(Node):
    def __init__(self, tank_motion: TankMotion):
        super().__init__("motion_controller_node")
        self.tank_motion = tank_motion
        self.get_logger().info("Motion Controller Node has been started!!!")
        self.subscription = self.create_subscription(
            MotionDemand, "user_interface", self.listener_callback, 10
        )

    def listener_callback(self, msg):
        # self.get_logger().info(
        # "I heard motion demand - yaw: %d, forward: %d" % (msg.yaw, msg.forward)
        # )
        self.tank_motion.apply_motion_demand(msg.yaw, msg.forward)


def main(args=None):
    tank_motion = TankMotion()  # Create an instance of the tankMotor class

    rclpy.init(args=args)
    node = MotionControllerNode(tank_motion)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
