/*************************************************************************
	> File Name: planning_node.cpp
	> Author: wanglu
	> Mail: wanglu1987xy@126.com 
	> Created Time: Sun 31 Jul 2016 03:48:36 PM CST
 ************************************************************************/

#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char **argv)
{
	ros::init(argc, argv, "planning_node");
	ros::NodeHandle n;
	ros::Publisher chatter_pub = n.advertise<std_msgs::String>("message", 1000);
	ros::Rate loop_rate(1);

	int cnt = 0;
	while (ros::ok())
	{
		std_msgs::String msg;
		std::stringstream send_string;
		send_string << "Recieve from planning node at time" << cnt << ".";
		msg.data = send_string.str();
		ROS_INFO("Send the message from planning node at time %d", cnt);
		chatter_pub.publish(msg);
		ros::spinOnce();
		loop_rate.sleep();
		cnt++;
	}

	return 0;
}
