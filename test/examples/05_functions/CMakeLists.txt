add_executable(ex_05_tests "05_functions_tests.cpp")
target_link_libraries(ex_05_tests ex_05_01_library ex_05_02_library ex_05_03_library ex_05_04_library
                     ex_05_05_library)
add_test(NAME ex_05_tests COMMAND ex_05_tests -s)