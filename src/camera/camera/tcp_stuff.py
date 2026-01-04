   # self.socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        # self.socket.setsockopt(socket.IPPROTO_TCP, socket.TCP_NODELAY, 1) 
        # self.socket.setsockopt(socket.SOL_SOCKET, socket.SO_SNDBUF, 1024 * 1024*10)  # 10MB buffer
        # self.socket.settimeout(1)
        # try:
        #     self.socket.connect(("192.168.2.16", 5000))
        #     self.connected = True
        # except TimeoutError:
        #     self.get_logger().error("Could not connect to the server at 192.168.2.16:5000")


    # self.get_logger().info(f"Image captured.")
        # print(image)

        # if self.connected:
        #     try:
        #         image_bytes = image.tobytes()
        #         self.socket.sendall(image_bytes)

        #     except:
        #         pass