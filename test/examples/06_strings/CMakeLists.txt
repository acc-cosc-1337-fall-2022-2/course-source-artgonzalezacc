add_executable(ex_06_tests "06_strings_tests.cpp")
target_link_libraries(ex_06_tests ex_06_01_library ex_06_02_library ex_06_03_library)
add_test(NAME ex_06_tests COMMAND ex_06_tests -s)