add_executable(tests test_main.cpp)

# Register with CTest
add_test(NAME all_tests COMMAND tests)
