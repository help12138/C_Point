cmake_minimum_required(VERSION 3.10)
project(CPoint VERSION 1.0.0)

# 设置C++标准
# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置包含目录
include_directories(include)

# 添加子目录（包含函数实现的src目录）
add_subdirectory(src)

# 添加可执行文件
add_executable(${PROJECT_NAME} main.cpp)

# 链接库（从src目录生成的库）
target_link_libraries(${PROJECT_NAME} PRIVATE MathFunctions)