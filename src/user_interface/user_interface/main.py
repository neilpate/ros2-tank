import rclpy

import pygame
from rclpy.node import Node

from example_interfaces.msg import String
from tank_interfaces.msg import MotionDemand

joysticks = {}

AXIS_THRESHOLD = 0.25


class UserInterfaceNode(Node):
    def __init__(self):
        super().__init__("user_interface_node")
        self.get_logger().info("User Interface Node has been started!")
        self.timer = self.create_timer(0.02, self.joystick_timer_callback)
        self.timer = self.create_timer(0.02, self.string_publisher_callback)
        self.publisher_ = self.create_publisher(MotionDemand, "user_interface", 10)

    def string_publisher_callback(self):
        msg = MotionDemand()
        msg.data = "Hello World: %d" % (self.get_clock().now().nanoseconds // 1000000)
        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing: "%s"' % msg.data)

    def joystick_timer_callback(self):
        for event in pygame.event.get():
            if event.type == pygame.JOYAXISMOTION:
                if event.axis == 0:
                    if abs(event.value) > AXIS_THRESHOLD:
                        print(f"Rotate {event.value * 100:.1f} %")

                if event.axis == 2:
                    if abs(event.value) > AXIS_THRESHOLD:
                        print(f"Backwards {event.value * 50 + 50:.1f} %")

                if event.axis == 5:
                    if abs(event.value) > AXIS_THRESHOLD:
                        print(f"Forward {event.value * 50 + 50:.1f} %")

            # Handle hotplugging
            if event.type == pygame.JOYDEVICEADDED:
                # This event will be generated when the program starts for every
                # joystick, filling up the list without needing to create them manually.
                joy = pygame.joystick.Joystick(event.device_index)
                joysticks[joy.get_instance_id()] = joy
                print(f"Joystick {joy.get_instance_id()} connencted")

            if event.type == pygame.JOYDEVICEREMOVED:
                del joysticks[event.instance_id]
                print(f"Joystick {event.instance_id} disconnected")


def main(args=None):
    pygame.init()
    rclpy.init(args=args)
    node = UserInterfaceNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
