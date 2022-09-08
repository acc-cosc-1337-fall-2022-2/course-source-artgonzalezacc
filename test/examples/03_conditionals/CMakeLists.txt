add_executable(ex_03_tests "03_conditionals_tests.cpp")
target_link_libraries(ex_03_tests ex_03_01_library ex_03_02_library ex_03_03_library ex_03_04_library)
add_test(NAME ex_03_tests COMMAND ex_03_tests -s)