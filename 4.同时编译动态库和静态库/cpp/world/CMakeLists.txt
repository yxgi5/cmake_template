#set(DIR_HELLO_SRCS hello.cpp)
#add_library(hello ${DIR_HELLO_SRCS})


# Required cmake version
#cmake_minimum_required (VERSION 2.6)

# Library name
set(MODULE_NAME world)
#set(LIBS
#    xxx
#)

# add source files
aux_source_directory(. ALL_SRCS)

# add include path
include_directories(
    .
)

# Add sub-directories

# Library Target
add_library(${MODULE_NAME} SHARED ${ALL_SRCS})
add_library(${MODULE_NAME}_static STATIC ${ALL_SRCS})
# Libraries need
#target_link_libraries(${MODULE_NAME} ${LIBS})

# 指定静态库的输出名称
#set_target_properties(${MODULE_NAME}_static PROPERTIES OUTPUT_NAME ${MODULE_NAME})
set_target_properties(${MODULE_NAME}_static PROPERTIES OUTPUT_NAME "${MODULE_NAME}")
# 使动态库和静态库同时存在
set_target_properties(${MODULE_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(${MODULE_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

# Library version
# VERSION 动态库版本
# SOVERSION API版本
#set_target_properties(${MODULE_NAM} PROPERTIES VERSION 1.0 SOVERSION 1)
