#设置静态库名
SET(LIB_NAME frame)

# 第三方库主目录
SET(THIRDPARTY ${PROJECT_SOURCE_DIR}/third_party)

#引头文件路径
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/common/frame)

# 找到当前所有源文件并赋值
AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/common/frame ALL_CPP)

# 生成静态库
ADD_LIBRARY(${LIB_NAME} STATIC ${ALL_CPP})
# 生成动态库
#ADD_LIBRARY(${LIB_NAME} SHARED ${ALL_CPP})