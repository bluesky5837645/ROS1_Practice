# include "ros/ros.h"
# include "std_msgs/String.h"

void callback(const std_msgs::String::ConstPtr& msg){
    ROS_INFO("Recieve the Data: %s",msg->data.c_str());
}

int main(int argc, char*argv[]){
    ros::init(argc,argv,"Listener");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe<std_msgs::String>("chat",10,callback);

    ros::spin();   
    // 這邊如果打ros::spinOnce()就只會用跑一次 然後就結束了,但是spin()就會一直停在這行,上面的程式都不會運行
    // 可參考 https://ithelp.ithome.com.tw/articles/10238734

    return 0;

}
