#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts
# we saw this in "ros2 interface show example_interface/srv/AddTwoInts"


class AddTwoIntsServer(Node):
  def __init__(self):
    super().__init__("add_two_ints_server")

    self.server_ = self.create_service(AddTwoInts, "add_two_ints", self.call_back_add_two_ints)
    self.get_logger().info("add two ints server started.")

  def call_back_add_two_ints(self, request, respons):
    respons.sum = request.a + request.b
    self.get_logger().info(f"Result: {respons.sum}")

    return respons


def main(args = None):
  rclpy.init(args = args)
  node = AddTwoIntsServer()

  rclpy.spin(node)
  rclpy.shutdown()

if __name__ == "__main__":
  main()