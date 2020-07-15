#set(DIR_HELLO_SRCS hello.cpp)
#add_library(hello ${DIR_HELLO_SRCS})


# Required cmake version
#cmake_minimum_required (VERSION 2.6)

# Library name
set(MODULE_NAME hello)
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
add_library(${MODULE_NAME} STATIC ${ALL_SRCS})
# Libraries need
#target_link_libraries(${MODULE_NAME} ${LIBS})

# Library version
#set_target_properties(${MODULE_NAM} PROPERTIES VERSION 1.0 SOVERSION 1)


