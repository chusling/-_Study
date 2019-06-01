# CMake version requested
cmake_minimum_required (VERSION 2.8)

# project name
project (ALG_SORT1)

set(CMAKE_CXX_STANDARD 11)
set(MODULE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

message(STATUS "---- Current target system: ----")
# find all cpp file
aux_source_directory(. DIR_SRCS)

# add ALG sub content 
add_subdirectory(ALG)

# generate target
add_executable(ALG_SORT ${DIR_SRCS})
find_package(glog 0.4.0 REQUIRED)
find_package(gflags REQUIRED)

# add link libraries
target_link_libraries(ALG_SORT ALG)
target_link_libraries(ALG_SORT 
                            glog::glog
                            gflags)
#target_link_libraries(ALG_SORT gflags)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
