# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "codbot_line_follower: 1 messages, 0 services")

set(MSG_I_FLAGS "-Icodbot_line_follower:/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(codbot_line_follower_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg" NAME_WE)
add_custom_target(_codbot_line_follower_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "codbot_line_follower" "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(codbot_line_follower
  "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/codbot_line_follower
)

### Generating Services

### Generating Module File
_generate_module_cpp(codbot_line_follower
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/codbot_line_follower
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(codbot_line_follower_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(codbot_line_follower_generate_messages codbot_line_follower_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg" NAME_WE)
add_dependencies(codbot_line_follower_generate_messages_cpp _codbot_line_follower_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(codbot_line_follower_gencpp)
add_dependencies(codbot_line_follower_gencpp codbot_line_follower_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS codbot_line_follower_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(codbot_line_follower
  "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/codbot_line_follower
)

### Generating Services

### Generating Module File
_generate_module_eus(codbot_line_follower
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/codbot_line_follower
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(codbot_line_follower_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(codbot_line_follower_generate_messages codbot_line_follower_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg" NAME_WE)
add_dependencies(codbot_line_follower_generate_messages_eus _codbot_line_follower_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(codbot_line_follower_geneus)
add_dependencies(codbot_line_follower_geneus codbot_line_follower_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS codbot_line_follower_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(codbot_line_follower
  "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/codbot_line_follower
)

### Generating Services

### Generating Module File
_generate_module_lisp(codbot_line_follower
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/codbot_line_follower
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(codbot_line_follower_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(codbot_line_follower_generate_messages codbot_line_follower_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg" NAME_WE)
add_dependencies(codbot_line_follower_generate_messages_lisp _codbot_line_follower_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(codbot_line_follower_genlisp)
add_dependencies(codbot_line_follower_genlisp codbot_line_follower_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS codbot_line_follower_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(codbot_line_follower
  "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/codbot_line_follower
)

### Generating Services

### Generating Module File
_generate_module_nodejs(codbot_line_follower
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/codbot_line_follower
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(codbot_line_follower_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(codbot_line_follower_generate_messages codbot_line_follower_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg" NAME_WE)
add_dependencies(codbot_line_follower_generate_messages_nodejs _codbot_line_follower_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(codbot_line_follower_gennodejs)
add_dependencies(codbot_line_follower_gennodejs codbot_line_follower_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS codbot_line_follower_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(codbot_line_follower
  "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/codbot_line_follower
)

### Generating Services

### Generating Module File
_generate_module_py(codbot_line_follower
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/codbot_line_follower
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(codbot_line_follower_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(codbot_line_follower_generate_messages codbot_line_follower_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/codbot/codbot_ws/src/codbot_projects/codbot_line_follower/msg/pos.msg" NAME_WE)
add_dependencies(codbot_line_follower_generate_messages_py _codbot_line_follower_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(codbot_line_follower_genpy)
add_dependencies(codbot_line_follower_genpy codbot_line_follower_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS codbot_line_follower_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/codbot_line_follower)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/codbot_line_follower
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(codbot_line_follower_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/codbot_line_follower)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/codbot_line_follower
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(codbot_line_follower_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/codbot_line_follower)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/codbot_line_follower
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(codbot_line_follower_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/codbot_line_follower)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/codbot_line_follower
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(codbot_line_follower_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/codbot_line_follower)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/codbot_line_follower\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/codbot_line_follower
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(codbot_line_follower_generate_messages_py std_msgs_generate_messages_py)
endif()
