#! /usr/bin/env python 
# coding:utf-8

import  rospy
from Self_defined_Msg.msg import person


if __name__ == "__main__":
    rospy.init_node("talker")
    pub = rospy.Publisher("chat",person,queue_size=10)
    r = rospy.Rate(10)

    p = person()
    p.name = "name"
    p.age = 20
    p.height = 166.6

    rospy.sleep(rospy.Duration(1))   # 在C++裡面是這樣打的: ros::Duration(1).sleep()
    while not rospy.is_shutdown():
        rospy.loginfo("Talker publish: %s, %d, %f",p.name, p.age, p.height)
        pub.publish(p)
        p.age += 1
        r.sleep()
        



