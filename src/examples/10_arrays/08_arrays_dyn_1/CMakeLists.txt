add_library(ex_10_08_library "arrays_dyn_1.cpp" "arrays_dyn_1.h")
add_executable(ex_10_08_exe "main.cpp")
target_link_libraries(ex_10_08_exe ex_10_08_library)
