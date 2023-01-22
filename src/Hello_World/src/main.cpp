#include "ros/ros.h"

int main(int argc, char *argv[])
{
    //執行 ros 節點初始化
    ros::init(argc,argv,"hello");
    //創建 ros 節點句柄(非必須)
    ros::NodeHandle n;
    //控製臺輸出 hello world
    ROS_INFO("hello world!");

    return 0;
}
