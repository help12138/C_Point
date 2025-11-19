# 方法2：使用通配符自动收集所有cpp文件
file(GLOB MATH_SOURCES "*.cpp")

# 可选：打印找到的源文件用于调试
message(STATUS "找到的源文件: ${MATH_SOURCES}")

# 创建库
add_library(MathFunctions ${MATH_SOURCES})

# 设置包含目录
target_include_directories(MathFunctions PUBLIC ${CMAKE_SOURCE_DIR}/include)

# 设置编译特性
target_compile_features(MathFunctions PUBLIC cxx_std_17)