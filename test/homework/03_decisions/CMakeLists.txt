add_executable(hw_03_tests "03_decisions_tests.cpp")
target_link_libraries(hw_03_tests hw_03_library)
add_test(NAME hw_03_tests COMMAND hw_03_tests -s)