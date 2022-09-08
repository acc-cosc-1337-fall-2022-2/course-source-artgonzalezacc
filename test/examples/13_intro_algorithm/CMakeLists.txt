add_executable(ex_13_tests "13_intro_algorithm_tests.cpp")
target_link_libraries(ex_13_tests ex_13_01_library ex_13_02_library)
add_test(NAME ex_13_tests COMMAND ex_13_tests -s)