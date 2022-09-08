add_executable(ex_04_tests "04_repetition_tests.cpp")
target_link_libraries(ex_04_tests ex_04_01_library ex_04_02_library ex_04_03_library)
add_test(NAME ex_04_tests COMMAND ex_04_tests -s)