#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from simple_interfaces_pkg.srv import MultiplyTwoInts


class MultiplyTwoIntsClient(Node):
  def __init__(self):
    super().__init__("mutliply_two_ints_client")
    self.call_multiply_two_ints_server(21, 2)
    self.call_multiply_two_ints_server(2, 2)
    self.call_multiply_two_ints_server(21, 3)
    self.call_multiply_two_ints_server(22, 2)




  def call_multiply_two_ints_server(self, a, b):
    client_ = self.create_client(MultiplyTwoInts, "multiply_two_ints")

    while not client_.wait_for_service(1.0):
      self.get_logger().warn("Waiting for server - [MultiplyTwoInts]")

    request = MultiplyTwoInts.Request()
    request.a = a
    request.b = b

    future = client_.call_async(request)
    future.add_done_callback(self.callback_call_multiply_two_ints)

  
  def callback_call_multiply_two_ints(self, future):
    try:
      respons = future.result()
      self.get_logger().info(f"Result: {respons}")

    except Exception as e:
      self.get_logger().error("Service call failed %r" % (e, ))

  

def main(args = None):
  rclpy.init(args = args)
  node = MultiplyTwoIntsClient()

  rclpy.spin(node)
  rclpy.shutdown()


if __name__ == "__main__":
  main()