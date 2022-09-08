add_library(ex_10_09_library "arrays_dyn_2.cpp" "arrays_dyn_2.h")
add_executable(ex_10_09_exe "main.cpp")
target_link_libraries(ex_10_09_exe ex_10_09_library)
