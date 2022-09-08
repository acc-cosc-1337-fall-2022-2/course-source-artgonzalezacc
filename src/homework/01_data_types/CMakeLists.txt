cmake_minimum_required (VERSION 3.8)
project(hw_01_library)

add_library(hw_01_library "data_types.cpp" "data_types.h")
add_executable(hw_01_exe "main.cpp" "data_types.cpp")




