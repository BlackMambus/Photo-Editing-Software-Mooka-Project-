cmake_minimum_required(VERSION 3.10)
project(PhotoEditor)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(PhotoEditor main.cpp)
target_link_libraries(PhotoEditor ${OpenCV_LIBS})
