#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
# from functools import partial
from example_interfaces.srv import AddTwoInts

class AddTwoIntsClientNode(Node):
  def __init__(self):
    super().__init__("add_two_ints_client")
    self.call_add_two_ints_server(3, 1)
    self.call_add_two_ints_server(-3, 1)
    self.call_add_two_ints_server(12, 1)
    self.call_add_two_ints_server(3, 121)
    self.call_add_two_ints_server(34, 1)

  def call_add_two_ints_server(self, a, b):
    client_ = self.create_client(AddTwoInts, "add_two_ints")
  
    while not client_.wait_for_service(1.0):
      self.get_logger().warn("Waiting for server - [AddTwoInts]")

    request   = AddTwoInts.Request()
    request.a = a
    request.b = b

    future = client_.call_async(request)
    future.add_done_callback(self.callback_call_add_two_ints)


  def callback_call_add_two_ints(self, future):
    try:
      respons = future.result()
      self.get_logger().info("Result: " + str(respons.sum))
    
    except Exception as e:
      self.get_logger().error("Service call failed %r" % (e, ))



def main(args = None):
  rclpy.init(args = args)
  node = AddTwoIntsClientNode()

  rclpy.spin(node)
  rclpy.shutdown()



if __name__ == "__main__":
  main()