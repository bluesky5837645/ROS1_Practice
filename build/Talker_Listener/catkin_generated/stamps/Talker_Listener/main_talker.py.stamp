#! /usr/bin/env python
# coding:utf-8
import rospy
from std_msgs.msg import String
import time


if __name__ == "__main__":
    rospy.init_node("talker")
    pub = rospy.Publisher("chat",String,queue_size=10)

    msg = String()
    msg_font = "Hello"
    r = rospy.Rate(10)   # 跟C++的物件宣告不一樣
    count = 1
    
    while not rospy.is_shutdown():
        c_time = time.time()
        msg.data = msg_font + str(count)
        rospy.loginfo("Talker Publish: %s", msg.data)
        pub.publish(msg)
        count += 1
        r.sleep()
        duration = time.time()-c_time
        rospy.loginfo("Time Spend: %f", duration)




