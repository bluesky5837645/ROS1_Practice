# include "ros/ros.h"
# include "person.h"
# include "sys/time.h"


int main(int argc,char*argv[]){
    ros::init(argc,argv,"talker");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<Self_defined_Msg::person>("chat",10);
    
    Self_defined_Msg::person p;
    p.name = "Name";
    p.age = 20;
    p.height = 170;

    ros::Rate r(10);
    ros::Duration(1).sleep();

    while(ros::ok()){
        ROS_INFO("Talker Publish: %s, %d, %f",p.name.c_str(), p.age, p.height);
        pub.publish(p);
        p.age++;
        r.sleep();
        ros::spinOnce();
    }

    return 0;

}