#! /usr/bin/env python   
# coding:utf-8
# 一定要加上面的去宣告解釋器(且一定要第一行)
# 一定要加上面的coding:utf-8,之後才可以打中文
#  同時python是直接連動的,這邊直接改可以直接更改輸出

import  rospy

if __name__ == "__main__":
    rospy.init_node("Hello")
    rospy.loginfo("Hello World!")