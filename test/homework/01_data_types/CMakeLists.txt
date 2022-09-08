add_executable(hw_01_tests "01_data_types_tests.cpp")
target_link_libraries(hw_01_tests hw_01_library)
add_test(NAME hw_01_tests COMMAND hw_01_tests -s)