add_executable(ex_07_tests "07_vector_tests.cpp")
target_link_libraries(ex_07_tests ex_07_01_library ex_07_02_library ex_07_03_library)
add_test(NAME ex_07_tests COMMAND ex_07_tests -s)