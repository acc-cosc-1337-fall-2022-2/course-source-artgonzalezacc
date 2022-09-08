add_executable(hw_08_tests "08_memory_tests.cpp")
target_link_libraries(hw_08_tests hw_08_library)
add_test(NAME hw_08_tests COMMAND hw_08_tests -s)
