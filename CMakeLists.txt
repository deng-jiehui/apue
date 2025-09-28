cmake_minimum_required(VERSION 3.20)
project(APUE)

# 设置c标准
Set(CMAKE_C_STANDARD 99)

#添加include日录作为公共头文件目录
include_directories(include)

add_subdirectory(include)
add_subdirectory(intro)