#!/usr/bin/env python2
# coding:utf-8

import rospy
from std_msgs.msg import String

def callback(msg):
    rospy.loginfo("Receive data: %s",msg.data)


if __name__=="__main__":
    rospy.init_node("listener")
    sub = rospy.Subscriber("chat",String,callback)
    rospy.spin()
