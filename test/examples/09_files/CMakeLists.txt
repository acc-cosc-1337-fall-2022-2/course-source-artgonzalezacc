add_executable(ex_09_tests "09_files_tests.cpp")
target_link_libraries(ex_09_tests ex_09_01_library ex_09_02_library)
add_test(NAME ex_09_tests COMMAND ex_09_tests -s)