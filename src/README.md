gmapping保存地图：
rosrun map_server map_saver -f ..路径名/地图名

监听odom到base_footprint的变换

rosrun tf tf_echo /odom /base_footprint

配置ssh远程：
export ROS_IP=`hostname -I | awk '{print $1}'`
export ROS_HOSTNAME=`hostname -I | awk '{print $1}'`
export ROS_MASTER_URI=http://`hostname -I | awk '{print $1}'`:11311
#export ROS_MASTER_URI=http://192.168.9.1:11311

配置env环境：
#BASE_TYPE can Set As NanoRobot NanoCar NanoRobot_Pro NanoCar_Pro NanoCar_SE 4WD 4WD_OMNI
export BASE_TYPE=NanoCar_Pro
#LIDAR_TYPE can set As rplidar/sclidar/rpliadr_super
export LIDAR_TYPE=rplidar
#CAMERA_TYPE can set As astrapro/csi72
export CAMERA_TYPE=astrapro
export SONAR_NUM=2
