#####################################################################
cmake_minimum_required(VERSION 2.8.3)
project(control)

#####################################################################
find_package(
	catkin
	REQUIRED
	roscpp
	rospy
	std_msgs
)

#####################################################################
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES control
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

include_directories(
	include
	${catkin_INCLUDE_DIRS}
)

#####################################################################
#add_library(
#	src/control.cpp
#)

#####################################################################
add_executable(control_node src/control_node.cpp)
#add_dependencies(control_node control_generate_messages_cpp)
target_link_libraries(control_node ${catkin_LIBRARIES})
