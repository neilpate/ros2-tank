import time

import libcamera
import rclpy
from rclpy.node import Node
from picamera2 import Picamera2, CompletedRequest
from pathlib import Path
from sensor_msgs.msg import CompressedImage
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
import cv2

from geometry_msgs.msg import TransformStamped, Transform
from tf2_ros import TransformBroadcaster

class CameraNode(Node):
    cam : Picamera2
    directory : Path = Path("~/images")
    count : int = 0
    save_image : bool = True
    connected : bool = False
    last_send_time : float = 0.0

    def __init__(self):
        super().__init__("camera_node")

         # Create a TF broadcaster
        self.tf_broadcaster = TransformBroadcaster(self)
        
        # Define QoS profile for camera stream
        qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,  # Drop messages if network is slow
            history=HistoryPolicy.KEEP_LAST,           # Keep only latest frame
            depth=1                                     # Buffer size: 1 message
        )
        
        self.image_publisher = self.create_publisher(CompressedImage, 'camera/image_raw', qos)
        
        self.directory = self.directory.expanduser()
        self.directory.mkdir(parents=True, exist_ok=True)
        
        cam = Picamera2()
        cam.post_callback = self.capture_callback

        config = cam.create_preview_configuration(main={"format": "RGB888", "size": (640, 480)}, transform=libcamera.Transform(vflip=True, hflip=True), controls={"FrameRate": 20})
        cam.configure(config)

        self.cam = cam
        self.cam.start()
        
        self.logger = self.get_logger()
        self.logger.info("Camera node has been started.")
        
     
    def capture_callback(self , request : CompletedRequest) -> None:
        image = request.make_array("main")
        
        elapsed = time.time() - self.last_send_time
        # self.logger.info(f"Time since last capture: {elapsed:.3f}s")
        self.last_send_time = time.time()

        msg = CompressedImage()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'camera'
        msg.format = "jpeg"
        _, compressed = cv2.imencode('.jpg', image, [cv2.IMWRITE_JPEG_QUALITY, 80])
        msg.data = compressed.tobytes()

        self.image_publisher.publish(msg)

        t = TransformStamped()

        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'world'
        t.child_frame_id = 'camera'

        # Set translation (x, y, z)
        t.transform.translation.x = 0.0
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.0

        # Set rotation as quaternion (no rotation in this example)
        t.transform.rotation.x = 0.0
        t.transform.rotation.y = 0.0
        t.transform.rotation.z = 0.0
        t.transform.rotation.w = 1.0

        self.tf_broadcaster.sendTransform(t)
        # self.get_logger().info('Published TF: world -> camera')

def main():
    rclpy.init()
    node = CameraNode()
    rclpy.spin(node)
    node.cam.stop()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
