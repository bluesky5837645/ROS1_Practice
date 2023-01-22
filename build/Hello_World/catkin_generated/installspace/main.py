#! /usr/bin/env python   
# coding:utf-8
# 一定要加上面的去宣告解釋器(且一定要第一行)
# 一定要加上面的才可以打中文


import  rospy

if __name__ == "__main__":
    rospy.init_node("Hello")
    rospy.loginfo("Hello World!")