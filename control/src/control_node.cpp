/*************************************************************************
	> File Name: control_node.cpp
	> Author: wanglu
	> Mail: wanglu1987xy@126.com 
	> Created Time: Sun 31 Jul 2016 03:49:21 PM CST
 ************************************************************************/

#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>
#include <sstream>

using namespace std;

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
	ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "control_node");
	ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe("message", 1000, chatterCallback);
	ros::spin();

	return 0;
}
