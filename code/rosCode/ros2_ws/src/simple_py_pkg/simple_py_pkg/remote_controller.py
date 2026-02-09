#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class RemoteNode(Node):

  def __init__(self):
    super().__init__("remote_controller_node")
    self.subscriber_ = self.create_subscription(String, "channel_name",
                                                self.callback_television, 10)
    self.get_logger().info("Remote Controller has been subscribed!")

  def callback_television(self, msg):
    self.get_logger().info(msg.data)
    


def main(args = None):

  rclpy.init(args = args)
  node = RemoteNode()

  rclpy.spin(node)
  rclpy.shutdown()

if __name__ == "__main__":
  main()