import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import CompressedImage
import cv2
import numpy as np
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

class CameraListener(Node):

    last_received_time = 0.0

    def __init__(self):
        super().__init__('camera_listener')
        self.logger = self.get_logger()
        self.logger.info('Created camera_listener node')

        # Define QoS profile for camera stream
        qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,  # Drop messages if network is slow
            history=HistoryPolicy.KEEP_LAST,           # Keep only latest frame
            depth=1                                    # Buffer size: 1 message
        )

        self.create_subscription(
            CompressedImage,
            'camera/image_raw',
            self.listener_callback,
            qos)

    def listener_callback(self, msg : CompressedImage):
        elasped_time = time.time() - self.last_received_time
        self.last_received_time = time.time()
        self.logger.info('Time since last image: %.3f seconds' % elasped_time)

        # Decode the compressed image
        np_arr = np.frombuffer(msg.data, np.uint8)
        image = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)
        
        # Display the image
        cv2.imshow('Camera Feed', image)
        cv2.waitKey(1)  # Required for image to display
        
        # self.get_logger().info('Received a %s image' % (msg.format))

def main(args=None):
    rclpy.init(args=args)
    camera_listener = CameraListener()
    rclpy.spin(camera_listener)
    camera_listener.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()