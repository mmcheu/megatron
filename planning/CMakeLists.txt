#####################################################################
cmake_minimum_required(VERSION 2.8.3)
project(planning)

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
# INCLUDE_DIRS include
# LIBRARIES control
# CATKIN_DEPENDS other_catkin_pkg
# DEPENDS system_lib
)

include_directories(
	include
	${catkin_INCLUDE_DIRS}
)

#####################################################################
#add_library(
#   src/planning.cpp
#)

#####################################################################
add_executable(planning_node src/planning_node.cpp)
#add_dependencies(planning_node planning_generate_messages_cpp)
target_link_libraries(planning_node ${catkin_LIBRARIES})
