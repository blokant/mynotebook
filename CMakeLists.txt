cmake_minimum_required(VERSION 3.2.0 FATAL_ERROR)

project(mynotebook VERSION 0.1.0 LANGUAGES CXX )

add_subdirectory(note)	
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(mynotebook main.cpp)
target_link_libraries(mynotebook notelibrary)