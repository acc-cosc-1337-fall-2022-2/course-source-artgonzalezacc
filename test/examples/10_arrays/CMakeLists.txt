add_executable(ex_10_tests "10_arrays_tests.cpp")
target_link_libraries(ex_10_tests ex_10_01_library ex_10_02_library ex_10_03_library ex_10_04_library
                      ex_10_05_library ex_10_06_library ex_10_07_library ex_10_08_library ex_10_09_library
                      ex_10_10_library )
add_test(NAME ex_10_tests COMMAND ex_10_tests -s)