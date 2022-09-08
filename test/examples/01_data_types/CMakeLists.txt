add_executable(ex_01_tests "01_data_types_tests.cpp")
target_link_libraries(ex_01_tests ex_01_01_library ex_01_02_library ex_01_03_library ex_01_04_library
                     ex_01_05_library)
add_test(NAME ex_01_tests COMMAND ex_01_tests -s)