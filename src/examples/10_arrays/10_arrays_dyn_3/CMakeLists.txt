add_library(ex_10_10_library "arrays_dyn_3.cpp" "arrays_dyn_3.h")
add_executable(ex_10_10_exe "main.cpp")
target_link_libraries(ex_10_10_exe ex_10_10_library)
