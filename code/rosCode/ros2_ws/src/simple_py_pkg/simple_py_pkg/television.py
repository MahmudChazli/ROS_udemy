#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class ChannelNode(Node):
  def __init__(self):
    super().__init__("channel_node")

    # testing parameters this has nothing to do with this file
    self.declare_parameter("parameter_1")
    ##########################################################


    self.get_logger().info("[INFO]... Channel Name has been published.")

    self.test_ = "this is a test "
    self.publisher_ = self.create_publisher(String, "channel_name", 10)
    self.timer_ = self.create_timer(1, self.publish_channel)

  def publish_channel(self):
    msg = String()
    msg.data = self.test_ + "Welcome to the Channel Name!"
    self.publisher_.publish(msg)

def main(args = None):
  rclpy.init(args = args)
  node = ChannelNode()

  rclpy.spin(node)
  rclpy.shutdown()

if __name__ == "__main__":
  main()