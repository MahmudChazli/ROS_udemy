import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mahmudch/Desktop/ROS_udemy/code/rosCode/ros2_ws/install/lidar_py_pkg'
