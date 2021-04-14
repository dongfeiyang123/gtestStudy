cmake_minimum_required(VERSION 3.5.1)
# 工程名
PROJECT(demon)

SET(CMAKE_C_FLAGS_DEBUG "-g -fPIC -D_FORTIFY_SOURCE=2 -pthread -Wfloat-equal -Wshadow -Wformat=2 -frandom-seed=0 -Wno-deprecated -fstack-protector-strong -Wall -Wextra")
SET(CMAKE_C_FLAGS_RELEASE "-g -o1 -fPIC -D_FORTIFY_SOURCE=2 -pthread -Wfloat-equal -Wshadow -Wformat=2 -frandom-seed=0 -Wno-deprecated -fstack-protector-strong -Wall -Wextra")
SET(CMAKE_CXX_FLAGS_DEBUG "-g -fPIC -D_FORTIFY_SOURCE=2 -pthread -Wfloat-equal -Wshadow -Wformat=2 -frandom-seed=0 -Wno-deprecated -fstack-protector-strong -Wall -Wextra")
SET(CMAKE_CXX_FLAGS_RELEASE "-g -o1 -fPIC -D_FORTIFY_SOURCE=2 -pthread -Wfloat-equal -Wshadow -Wformat=2 -frandom-seed=0 -Wno-deprecated -fstack-protector-strong -Wall -Wextra")

# 编译模式
SET(CMAKE_BUILD_TYPE Debug)
#SET(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_STANDARD 11)
#设置库的存放路径
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/libs)
#设置可执行文件输出目录
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#编译自己造的公共接口
ADD_SUBDIRECTORY(common)

#编译业务代码
ADD_SUBDIRECTORY(src)