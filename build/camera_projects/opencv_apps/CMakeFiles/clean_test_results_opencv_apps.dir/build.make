# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/codbot/codbot_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/codbot/codbot_ws/build

# Utility rule file for clean_test_results_opencv_apps.

# Include the progress variables for this target.
include camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps.dir/progress.make

camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps:
	cd /home/codbot/codbot_ws/build/camera_projects/opencv_apps && /usr/bin/python2 /opt/ros/melodic/share/catkin/cmake/test/remove_test_results.py /home/codbot/codbot_ws/build/test_results/opencv_apps

clean_test_results_opencv_apps: camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps
clean_test_results_opencv_apps: camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps.dir/build.make

.PHONY : clean_test_results_opencv_apps

# Rule to build all files generated by this target.
camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps.dir/build: clean_test_results_opencv_apps

.PHONY : camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps.dir/build

camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps.dir/clean:
	cd /home/codbot/codbot_ws/build/camera_projects/opencv_apps && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_opencv_apps.dir/cmake_clean.cmake
.PHONY : camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps.dir/clean

camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps.dir/depend:
	cd /home/codbot/codbot_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codbot/codbot_ws/src /home/codbot/codbot_ws/src/camera_projects/opencv_apps /home/codbot/codbot_ws/build /home/codbot/codbot_ws/build/camera_projects/opencv_apps /home/codbot/codbot_ws/build/camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : camera_projects/opencv_apps/CMakeFiles/clean_test_results_opencv_apps.dir/depend

