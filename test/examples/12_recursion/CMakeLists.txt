add_executable(ex_12_tests "12_recursion_tests.cpp")
target_link_libraries(ex_12_tests ex_12_01_library)
add_test(NAME ex_12_tests COMMAND ex_12_tests -s)