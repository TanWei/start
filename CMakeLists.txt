PROJECT(DynamicCast)
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "-O0 -Wall -g -ggdb")
SET(SRC_LIST DynamicCast.h DynamicCast.cpp)
ADD_EXECUTABLE(DynamicCast ${SRC_LIST})
add_subdirectory(net)