add_executable(ex_02_tests "02_expressions_tests.cpp")
target_link_libraries(ex_02_tests ex_02_01_library ex_02_02_library ex_02_03_library ex_02_04_library
                     ex_02_05_library ex_02_06_library)
add_test(NAME ex_02_tests COMMAND ex_02_tests -s)