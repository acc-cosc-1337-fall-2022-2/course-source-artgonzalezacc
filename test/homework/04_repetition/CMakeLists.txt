add_executable(hw_04_tests "04_iteration_tests.cpp")
target_link_libraries(hw_04_tests hw_04_library)
add_test(NAME hw_04_tests COMMAND hw_04_tests -s)