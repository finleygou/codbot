#!/usr/bin/python
# -*- coding: utf-8 -*-

import numpy as np
import math
import time
import rospy
import cv2
from std_msgs.msg import Int32
from sensor_msgs.msg import LaserScan, Image
from cv_bridge import CvBridge, CvBridgeError

# Discretization Size
disc_size = 0.02
# Discretization Factor
disc_factor = 1 / disc_size
# Max Lidar Range
max_lidar_range = 10
# Create Image Size Using Range and Discretization Factor
image_size = int(max_lidar_range * disc_factor)


class laser_to_image:
    def __init__(self):
        # Laser Scan To Subscribe to
        self.joy_sub = rospy.Subscriber('/scan', LaserScan, self.cloud_to_image_callback)
        #self.sonic_sub = rospy.Subscirber('/vcu/SupersonicDistance',Int32,self.sonic_callback)
        # Publisher for Image
        #self.pub = rospy.Publisher("scan_to_image", Image, queue_size=10)
        # CvBridge Setup
        self.bridge = CvBridge()
        rospy.loginfo("laser_image_converter created!")

    def sonic_callback(self,msg):
        rospy.loginfo("good")

    # 我们的雷达y轴向上。从-pi到pi有720个点(-pi,pi 是相对于y轴的夹角)，在plot时进行了坐标轴旋转，加了90°
    # 即，从y轴负半轴起（绝对系）逆时针转一圈对应720个点。
    def cloud_to_image_callback(self, scan):
        global disc_size, disc_factor, max_lidar_range , image_size
        start=time.time()
        # Store maxAngle of lidar
        maxAngle = scan.angle_max  # pi
        # print(maxAngle)
        # Store minAngle of lidar
        minAngle = scan.angle_min  # -pi
        # Store angleInc of lidar
        # print(minAngle)
        angleInc = scan.angle_increment
        # Store maxLength in lidar distances
        maxLength = scan.range_max
        # Store array of ranges
        ranges = scan.ranges
        # print(ranges)

        # Calculate the number of points in array of ranges
        num_pts = len(ranges)
        print(num_pts)
        # Create Array for extracting X,Y points of each data point
        xy_scan = np.zeros((num_pts, 2))
        # Create 3 Channel Blank Image
        blank_image = np.zeros((image_size, image_size, 3), dtype=np.uint8)
        #rospy.loginfo(ranges)
        # Loop through all points converting distance and angle to X,Y point
        for i in range(0,num_pts,10):
            # Check that distance is not longer than it should be
            if (ranges[i] > max_lidar_range) or (math.isnan(ranges[i])):
                continue
            else:
                # Calculate angle of point and calculate X,Y position
                angle = (minAngle + float(i) * angleInc) * 180 / math.pi + 90  # 角度变换
                xy_scan[i][0] = float(ranges[i] * math.sin(angle/180*math.pi))
                xy_scan[i][1] = float(ranges[i] * math.cos(angle/180*math.pi))
        # Loop through all points plot in blank_image
        for i in range(xy_scan.shape[0]):
            pt_sin = xy_scan[i, 0]
            pt_cos = xy_scan[i, 1]
            if (pt_sin < max_lidar_range) or (pt_sin > -1 * (max_lidar_range - disc_size)) or (pt_cos < max_lidar_range) or (
                    pt_cos > -1 * (max_lidar_range - disc_size)):
                pix_col = int(pt_cos* disc_factor+image_size//2)
                pix_row = int(image_size//2- pt_sin * disc_factor)
                if (pix_row > image_size) or (pix_col > image_size):
                    continue
                else:
                    if i<num_pts//4:
                        blank_image[pix_row][pix_col] = [0, 255,0]
                    else:
                        blank_image[pix_row][pix_col] = [0, 0, 255]
        cv2.imshow('test',blank_image)
        cv2.waitKey(50)
        #rospy.loginfo(blank_image.shape)
        rospy.loginfo("time: %f",time.time()-start)

        # Convert CV2 Image to ROS Message
        #img = self.bridge.cv2_to_imgmsg(blank_image, encoding="bgr8")
        # Publish image
        #self.pub.publish(img)

    # Use CV to show image
    # cv2.imshow('result', blank_image), cv2.waitKey(3)
    # blank_image = np.zeros((image_size,image_size,3))


if __name__ == '__main__':
    rospy.init_node('laser_to_image')
    laser_img_converter = laser_to_image()
    rospy.spin()
