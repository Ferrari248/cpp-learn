cmake_minimum_required(VERSION 3.10)

project(speech_contest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 收集当前目录下的.cpp文件
file(GLOB SRC_LIST "./*.cpp")
# 收集当前目录下的.h文件
file(GLOB HEADER_LIST "./*.h")

## 递归收集子目录x下的.cpp文件
#file(GLOB_RECURSIVE SUB_SRC_LIST "x/*.cpp")
## 递归收集子目录x下的.h文件
#file(GLOB_RECURSIVE SUB_HEADER_LIST "x/*.h")

# 合并源文件列表
set(ALL_SRC_LIST ${SRC_LIST} ${SUB_SRC_LIST})
# 合并头文件列表
set(ALL_HEADER_LIST ${HEADER_LIST} ${SUB_HEADER_LIST})

# 创建可执行文件目标并关联源文件
add_executable(YourExecutableName ${ALL_SRC_LIST})