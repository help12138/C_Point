# 创建库文件
add_library(MathFunctions sum.cpp)

# 设置库的属性
set_target_properties(MathFunctions PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
)