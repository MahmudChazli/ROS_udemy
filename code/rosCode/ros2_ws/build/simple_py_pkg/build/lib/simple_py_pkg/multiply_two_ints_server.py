#!/user/bin/env python3

import rclpy
from rclpy.node import Node
from simple_interfaces_pkg.srv import MultiplyTwoInts

class MultiplyTwoIntsServer(Node):
  def __init__(self):
    super().__init__("multiply_two_ints_server")

    self.server_ = self.create_service(MultiplyTwoInts, "multiply_two_ints", self.callback_multiply_two_ints)
    self.get_logger().info("Multiply Two Ints server started.")


  def callback_multiply_two_ints(self, request, respons):
    respons.result = request.a * request.b
    self.get_logger().info(f"Result: {respons.result}")

    return respons
  

def main(args = None):
  rclpy.init(args = args)
  node = MultiplyTwoIntsServer()

  rclpy.spin(node)
  rclpy.shutdown()


if __name__ == "__main__":
  main()