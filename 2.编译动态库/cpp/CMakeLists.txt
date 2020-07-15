# Required cmake version
#cmake_minimum_required(VERSION 3.5.0)
#cmake_policy(SET CMP0048 NEW)
#set(CMAKE_CXX_STANDARD 11)
cmake_minimum_required (VERSION 2.6)

# Project name
project(helloworld)
SET(EXE_NAME helloworld)

# global variables
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -g -O0 -Wall -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -g -O3 -Wall")
set(CMAKE_C_FLAGS_DEBUG "$ENV{CFLAGS} -g -O0 -Wall -ggdb")
set(CMAKE_C_FLAGS_RELEASE "$ENV{CFLAGS} -g -O3 -Wall")
#include_directories(. ${PROJECT_SOURCE_DIR}/include)
#set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# build type contrl
if(DEBUG_FLAG)
    set(CMAKE_BUILD_TYPE "Debug")
else()
    set(CMAKE_BUILD_TYPE "Release")
endif()
message(STATUS "Configuring BUILD TYPE:" ${CMAKE_BUILD_TYPE}) 

# add source files
#aux_source_directory(. ALL_SRCS)
#aux_source_directory(./src ALL_SRCS)
# 另外可以set的方式把源文件名给变量，然后在add_executable里面列出

# add include path
#include_directories(
#    .
#    ./hello 
#    ./world
#)
#include_directories(.)

# Add sub-directories
add_subdirectory(hello)
add_subdirectory(world)

# Excutable Target
#add_executable(helloworld hello.c world.c)
#add_executable(${EXE_NAME} ${ALL_SRCS})
