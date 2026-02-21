#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

def main(args = None):
  rclpy.init(args = args)
  node = Node("add_two_ints_client")

  client_ = node.create_client(AddTwoInts, "add_two_ints")
  while not client_.wait_for_service(1.0):
    node.get_logger().warn("Waiting for server [AddTwoInts]")
  
  request = AddTwoInts.Request()
  request.a = 14
  request.b = 12

  future = client_.call_async(request)
  rclpy.spin_until_future_complete(node, future)

  try:
    respons = future.result()
    node.get_logger().info(f"Result: {respons.sum}")
  except Exception as e:
    node.get_logger().error("Service call failed %r" % (e,))

  rclpy.shutdown()

if __name__ == "__main__":
  main()