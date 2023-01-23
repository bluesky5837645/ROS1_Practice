# include "ros/ros.h"
# include "std_msgs/String.h"
# include "sys/time.h"

int main(int argc, char* argv[]){
    ros::init(argc,argv,"talker");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("chat",10);

    std_msgs::String msg;
    std::string msg_font = "Hello";

    ros::Rate r(10);
    struct timeval start, end;
    int count = 1;


    ros::Duration(1).sleep();  
    // 延遲1秒讓subcriber可以向master註冊
    // subcriber都是收到最新的

    while(ros::ok()){
        gettimeofday(&start,NULL);
        
        std::stringstream ss;
        ss << msg_font << count;
        msg.data = ss.str();

        pub.publish(msg);
        ROS_INFO("Talker Publish: %s",msg.data.c_str());

        r.sleep();
        count++;

        gettimeofday(&end,NULL);
        float time = (end.tv_sec+0.000001*end.tv_usec)-(start.tv_sec+0.000001*start.tv_usec);
        ROS_INFO("Time Spend is: %.6f",time);

        ros::spinOnce();  
        //不加也可以 // 但不可以用spin() 雖然callback可以活著,但是上面的程式都不會執行到了 // 可參考 https://ithelp.ithome.com.tw/articles/10238734
        //會先呼叫spinoce原因是因為,因為只有spin函數才可以執行callback
    }

    return 0;
}