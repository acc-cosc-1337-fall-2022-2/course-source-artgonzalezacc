add_executable(hw_02_tests "02_expressions_tests.cpp")
target_link_libraries(hw_02_tests hw_02_library)
add_test(NAME hw_02_tests COMMAND hw_02_tests -s)