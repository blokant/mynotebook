cmake_minimum_required(VERSION 3.2.0 FATAL_ERROR)

project(mynotebook VERSION 0.1.0 LANGUAGES CXX )
include_directories(src)
add_executable(mynotebook main.cpp)