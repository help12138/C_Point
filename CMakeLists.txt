cmake_minimum_required(VERSION 3.15)
project(CPoint VERSION 1.0.0 LANGUAGES CXX)

# 设置C++标准
# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 创建可执行文件
add_executable(${PROJECT_NAME} main.cpp)

# 添加库子目录
add_subdirectory(src)

# 链接库
target_link_libraries(${PROJECT_NAME} PRIVATE MathFunctions)

# 包含头文件目录
target_include_directories(${PROJECT_NAME} PRIVATE include)