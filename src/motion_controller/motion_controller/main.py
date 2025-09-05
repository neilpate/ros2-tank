import rclpy
from rclpy.node import Node

from tank_interfaces.msg import MotionDemand

MINIMUM_THRESHOLD = 5  # Minimum absolute value to consider movement


class MotionControllerNode(Node):
    def __init__(self):
        super().__init__("motion_controller_node")
        self.get_logger().info("Motion Controller Node has been started!!!")
        self.subscription = self.create_subscription(
            MotionDemand, "user_interface", self.listener_callback, 10
        )

    def listener_callback(self, msg):
        self.get_logger().info(
            "I heard motion demand - yaw: %d, forward: %d" % (msg.yaw, msg.forward)
        )


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
