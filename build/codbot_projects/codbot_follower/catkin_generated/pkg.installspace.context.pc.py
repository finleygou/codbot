# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "nodelet;roscpp;visualization_msgs;depth_image_proc;dynamic_reconfigure".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lcodbot_follower".split(';') if "-lcodbot_follower" != "" else []
PROJECT_NAME = "codbot_follower"
PROJECT_SPACE_DIR = "/home/codbot/codbot_ws/install"
PROJECT_VERSION = "2.3.7"