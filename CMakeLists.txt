cmake_minimum_required(VERSION 3.5)
project(bitcq_msg)

set(CMAKE_CXX_STANDARD 14)

find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/BoundingBox.msg"
  "msg/BoundingBox2D.msg"
  "msg/BoundingBoxes.msg"
  "msg/CameraRadar.msg"
  "msg/Detector2D.msg"
  "msg/Detector2DArray.msg"
  "msg/Fusion.msg"
  "msg/FusionTarget.msg"
  "msg/IntList.msg"
  "msg/ObjectHypothesis.msg"
  "msg/Tracks.msg"
  "msg/TrackTarget.msg"
  "msg/TrackTargets.msg"
  DEPENDENCIES std_msgs sensor_msgs geometry_msgs
 )

ament_package()
