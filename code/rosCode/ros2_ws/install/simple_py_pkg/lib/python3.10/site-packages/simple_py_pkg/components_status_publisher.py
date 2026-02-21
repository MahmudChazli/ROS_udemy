#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from simple_interfaces_pkg.msg import ComponentsStatus


class ComponentsStatusPublisherNode(Node):
  def __init__(self):
    super().__init__("components_status_publisher")
    self.components_status_publisher_ = self.create_publisher(ComponentsStatus,
                                                              "components_status", 10)

    self.timer = self.create_timer(1.0, self.publish_components_status)
    self.get_logger().info("Components Status has been published.")

  def publish_components_status(self):
    msg = ComponentsStatus()
    msg.camera_on = True
    msg.lidar_on = True
    msg.motor_on = True
    msg.debug_msg = "Everything is on."
    self.components_status_publisher_.publish(msg)



def main(args = None):
  rclpy.init(args = args)
  node = ComponentsStatusPublisherNode()

  rclpy.spin(node)
  rclpy.shutdown()

if __name__ == "__main__":
  main()