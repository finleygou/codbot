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

# Include any dependencies generated for this target.
include camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/depend.make

# Include the progress variables for this target.
include camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/progress.make

# Include the compile flags for this target's objects.
include camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/flags.make

camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o: camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/flags.make
camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o: camera_projects/opencv_apps/adding_images.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codbot/codbot_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o"
	cd /home/codbot/codbot_ws/build/camera_projects/opencv_apps && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/adding_images_exe.dir/adding_images.cpp.o -c /home/codbot/codbot_ws/build/camera_projects/opencv_apps/adding_images.cpp

camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/adding_images_exe.dir/adding_images.cpp.i"
	cd /home/codbot/codbot_ws/build/camera_projects/opencv_apps && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codbot/codbot_ws/build/camera_projects/opencv_apps/adding_images.cpp > CMakeFiles/adding_images_exe.dir/adding_images.cpp.i

camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/adding_images_exe.dir/adding_images.cpp.s"
	cd /home/codbot/codbot_ws/build/camera_projects/opencv_apps && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codbot/codbot_ws/build/camera_projects/opencv_apps/adding_images.cpp -o CMakeFiles/adding_images_exe.dir/adding_images.cpp.s

camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o.requires:

.PHONY : camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o.requires

camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o.provides: camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o.requires
	$(MAKE) -f camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/build.make camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o.provides.build
.PHONY : camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o.provides

camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o.provides.build: camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o


# Object files for target adding_images_exe
adding_images_exe_OBJECTS = \
"CMakeFiles/adding_images_exe.dir/adding_images.cpp.o"

# External object files for target adding_images_exe
adding_images_exe_EXTERNAL_OBJECTS =

/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/build.make
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libcv_bridge.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libopencv_core.so.3.2.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libopencv_imgproc.so.3.2.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libopencv_imgcodecs.so.3.2.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libdynamic_reconfigure_config_init_mutex.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libimage_transport.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libmessage_filters.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libnodeletlib.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libbondcpp.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libuuid.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libclass_loader.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/libPocoFoundation.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libdl.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libroslib.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/librospack.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libpython2.7.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libboost_program_options.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libtinyxml2.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libroscpp.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/librosconsole.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libboost_regex.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/librostime.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /opt/ros/melodic/lib/libcpp_common.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libboost_system.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libboost_thread.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libboost_chrono.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libboost_date_time.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libboost_atomic.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libpthread.so
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_dnn.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_gapi.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_ml.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_stitching.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_video.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_face.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_objdetect.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_calib3d.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_features2d.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_flann.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_highgui.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_photo.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_videoio.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_imgcodecs.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_imgproc.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: /usr/local/lib/libopencv_core.so.4.0.0
/home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images: camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/codbot/codbot_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images"
	cd /home/codbot/codbot_ws/build/camera_projects/opencv_apps && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/adding_images_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/build: /home/codbot/codbot_ws/devel/lib/opencv_apps/adding_images

.PHONY : camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/build

camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/requires: camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/adding_images.cpp.o.requires

.PHONY : camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/requires

camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/clean:
	cd /home/codbot/codbot_ws/build/camera_projects/opencv_apps && $(CMAKE_COMMAND) -P CMakeFiles/adding_images_exe.dir/cmake_clean.cmake
.PHONY : camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/clean

camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/depend:
	cd /home/codbot/codbot_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codbot/codbot_ws/src /home/codbot/codbot_ws/src/camera_projects/opencv_apps /home/codbot/codbot_ws/build /home/codbot/codbot_ws/build/camera_projects/opencv_apps /home/codbot/codbot_ws/build/camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : camera_projects/opencv_apps/CMakeFiles/adding_images_exe.dir/depend

