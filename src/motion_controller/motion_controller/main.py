import rclpy
from rclpy.node import Node

from example_interfaces.msg import String


class MotionControllerNode(Node):
    def __init__(self):
        super().__init__("motion_controller_node")
        self.get_logger().info("Motion Controller Node has been started!!!")
        self.subscription = self.create_subscription(
            String, "user_interface", self.listener_callback, 10
        )

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)
    node = MotionControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
