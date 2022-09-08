add_executable(ex_08_tests "08_classes_tests.cpp")
target_link_libraries(ex_08_tests ex_08_01_library)
add_test(NAME ex_08_tests COMMAND ex_08_tests -s)