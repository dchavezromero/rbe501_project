#!/usr/bin/env python2

import rospy
import cv2
from sensor_msgs.msg import CameraInfo

rospy.init_node('camera_info', anonymous=True)

pub = rospy.Publisher('/camera_rect/camera_info', CameraInfo, queue_size=10)
rate = rospy.Rate(14)

while not rospy.is_shutdown():
    q = CameraInfo()

    q.header.frame_id = 'usb_cam'
    q.height = 1920
    q.width = 1080

    q.D = [-0.3703413368172045, 0.1454157875552074, -0.0007606186401782669, -0.0006775454919731473, 0.0]
    q.K = [597.2145695859463, 0.0, 308.9779892516992, 0.0, 595.5819773340913, 239.61510736393407, 0.0, 0.0, 1.0]
    q.R = [1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0]
    q.P = [527.2097778320312, 0.0, 305.3233410937537, 0.0, 0.0, 557.5983276367188, 239.2719769570249, 0.0, 0.0, 0.0, 1.0, 0.0]

    q.binning_x = 0
    q.binning_y = 0
    q.roi.x_offset = 0
    q.roi.y_offset = 0
    q.roi.height = 0
    q.roi.width = 0
    q.roi.do_rectify = False
    pub.publish(q)
    rate.sleep()