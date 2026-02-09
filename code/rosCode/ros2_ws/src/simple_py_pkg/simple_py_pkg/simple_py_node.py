#!/usr/bin/env python3


# 1.library

import rclpy
from rclpy.node import Node


# 2.methods

def main(args = None):
  rclpy.init(args = args)
  node = Node("py_node")

  # print statment
  node.get_logger().info("Hello World!")

  rclpy.spin(node)
  rclpy.shutdown()

# 3."if __name__" block

if __name__ == "__main__":
  main()