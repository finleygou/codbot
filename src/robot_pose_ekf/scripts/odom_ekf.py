#! /usr/bin/env python
# -*- coding: UTF-8 -*-

'''
Author: kinggreat24
Date: 2021-03-22 21:54:44
LastEditTime: 2021-03-22 21:57:48
LastEditors: kinggreat24
Description: 
FilePath: /robot_pose_ekf/scripts/odom_ekf.py
symbol_custom_string_obkoro1: 可以输入预定的版权声明、个性签名、空行等
'''
import rospy
from geometry_msgs.msg import PoseWithCovarianceStamped
from nav_msgs.msg import Odometry

class OdomEKF():
   def __init__(self):
       # Give the node a name
       rospy.init_node('odom_ekf', anonymous=False)

       # Publisher of type nav_msgs/Odometry
       self.ekf_pub = rospy.Publisher('output', Odometry, queue_size=10)
       
       # Wait for the /odom_combined topic to become available
       rospy.wait_for_message('input', PoseWithCovarianceStamped)
       
       # Subscribe to the /odom_combined topic
       rospy.Subscriber('input', PoseWithCovarianceStamped, self.pub_ekf_odom)
       
       rospy.loginfo("Publishing combined odometry on /odom_ekf")
       
   def pub_ekf_odom(self, msg):
       odom = Odometry()
       odom.header = msg.header
       odom.header.frame_id = '/odom'
       odom.child_frame_id = 'base_footprint'
       odom.pose = msg.pose
       
       self.ekf_pub.publish(odom)
       
if __name__ == '__main__':
   try:
       OdomEKF()
       rospy.spin()
   except:
       pass
