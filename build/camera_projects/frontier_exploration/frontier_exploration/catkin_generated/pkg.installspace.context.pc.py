# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/pcl-1.8;/usr/include/eigen3;/usr/include".split(';') if "${prefix}/include;/usr/include/pcl-1.8;/usr/include/eigen3;/usr/include" != "" else []
PROJECT_CATKIN_DEPENDS = "costmap_2d;exploration_server;dynamic_reconfigure;geometry_msgs;roscpp;tf;actionlib".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lfrontier_plugin;/usr/lib/aarch64-linux-gnu/libpcl_common.so;/usr/lib/aarch64-linux-gnu/libboost_system.so;/usr/lib/aarch64-linux-gnu/libboost_filesystem.so;/usr/lib/aarch64-linux-gnu/libboost_thread.so;/usr/lib/aarch64-linux-gnu/libboost_date_time.so;/usr/lib/aarch64-linux-gnu/libboost_iostreams.so;/usr/lib/aarch64-linux-gnu/libboost_serialization.so;/usr/lib/aarch64-linux-gnu/libboost_chrono.so;/usr/lib/aarch64-linux-gnu/libboost_atomic.so;/usr/lib/aarch64-linux-gnu/libboost_regex.so;/usr/lib/aarch64-linux-gnu/libpthread.so".split(';') if "-lfrontier_plugin;/usr/lib/aarch64-linux-gnu/libpcl_common.so;/usr/lib/aarch64-linux-gnu/libboost_system.so;/usr/lib/aarch64-linux-gnu/libboost_filesystem.so;/usr/lib/aarch64-linux-gnu/libboost_thread.so;/usr/lib/aarch64-linux-gnu/libboost_date_time.so;/usr/lib/aarch64-linux-gnu/libboost_iostreams.so;/usr/lib/aarch64-linux-gnu/libboost_serialization.so;/usr/lib/aarch64-linux-gnu/libboost_chrono.so;/usr/lib/aarch64-linux-gnu/libboost_atomic.so;/usr/lib/aarch64-linux-gnu/libboost_regex.so;/usr/lib/aarch64-linux-gnu/libpthread.so" != "" else []
PROJECT_NAME = "frontier_exploration"
PROJECT_SPACE_DIR = "/home/codbot/codbot_ws/install"
PROJECT_VERSION = "0.4.2"
