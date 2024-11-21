cmake_minimum_required(VERSION 3.29)
project(lk)

set(CMAKE_CXX_STANDARD 14)

# 添加当前目录下所有的源文件（.cpp 或 .cxx）
file(GLOB_RECURSE SOURCES **/*.cpp)

# 为每个源文件创建一个可执行文件
foreach(SOURCE_FILE ${SOURCES})
    get_filename_component(NAME_WE ${SOURCE_FILE} NAME_WE)
    add_executable(${NAME_WE} ${SOURCE_FILE})
endforeach()
