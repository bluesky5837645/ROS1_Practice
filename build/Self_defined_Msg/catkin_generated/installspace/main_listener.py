#!/usr/bin/env python2
# coding:utf-8
import rospy
from Self_defined_Msg.msg import person

def callback(msg):
    rospy.loginfo("Recieve the data: %s %d %f",msg.name, msg.age, msg.height)

if __name__ == "__main__":
    rospy.init_node("listener")
    sub = rospy.Subscriber("caht",person)
    rospy.spin()