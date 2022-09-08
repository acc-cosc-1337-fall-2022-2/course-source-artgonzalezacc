add_executable(hw_05_tests "05_functions_tests.cpp")
target_link_libraries(hw_05_tests hw_05_library)
add_test(NAME hw_05_tests COMMAND hw_05_tests -s)