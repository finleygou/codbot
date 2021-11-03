cmake_minimum_required(VERSION 3.0.2)
project(calibration_base)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES calibration_base
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)
catkin_install_python(PROGRAMS
   check_angular.py
   check_linear.py
   DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

