# include "ros/ros.h"
# include "person.h"


void callback(const Self_defined_Msg::person::ConstPtr msg){
    ROS_INFO("Recieve the data: %s %d %f",msg->name.c_str(),msg->age, msg->height);
}


int main(int argc, char*argv[]){
    ros::init(argc,argv,"listener");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe<Self_defined_Msg::person>("chat", 10, callback);
    ros::spin();
}