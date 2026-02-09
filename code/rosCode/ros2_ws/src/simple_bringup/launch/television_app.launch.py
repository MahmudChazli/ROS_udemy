from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  ld = LaunchDescription()
  remap_channel_topic = ("channel_name", "new_channel_name")

  television_publisher_node = Node(
    package = "simple_py_pkg",
    executable = "television_node",
    name = "new_television_node",
    remappings= [
      remap_channel_topic
    ]
  )

  remote_controller_node = Node(
    package = "simple_py_pkg",
    executable = "remote_controller",
    name = "new_remote_controller",
    remappings= [
      remap_channel_topic
    ],
    parameters= [
      {"parameter_1": 5}
    ]
  )

  ld.add_action(television_publisher_node)
  ld.add_action(remote_controller_node)

  return ld