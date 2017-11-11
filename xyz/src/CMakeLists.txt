cmake_minimum_required(VERSION 2.8)

include_directories(${xyz_SOURCE_DIR}/inc)

add_library(xyz SHARED xyz.cpp)
target_include_directories(xyz PUBLIC ${CMAKE_CURRENT_LIST_DIR})
