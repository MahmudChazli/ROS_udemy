#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan

class LidarDataNode(Node):
  def __init__(self):
    super().__init__("lidar_data_node")
    self.subscriber_ = self.create_subscription(LaserScan,
                                                "/lidar/out",
                                                self.callback_data,
                                                10)
    
    self.publisher_ = self.create_publisher(Twist,
                                            "/cmd_vel",
                                            10)
    

    self.get_logger().info("Lidar Node has been started.")

  def callback_data(self, msg):
    min_lidar_data_ = min(msg.ranges)

    self.get_logger().info("LIDAR DATA: " + str(min_lidar_data_))

    velocity = Twist()
    velocity.linear.x  = 0.5
    velocity.linear.y  = 0.0
    velocity.angular.z = 0.0

    if min_lidar_data_ <= 2.5:
      velocity.linear.x = 0.0

    self.publisher_.publish(velocity)



def main(args = None):
  rclpy.init(args = args)
  node = LidarDataNode()

  rclpy.spin(node)
  rclpy.shutdown()

if __name__ == "__main__":
  main()