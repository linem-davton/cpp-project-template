# first test
add_executable(test_hello test_hello.cpp)
target_link_libraries(test_hello PRIVATE GTest::gtest_main)

# second test


# third test


# discover tests
include(GoogleTest)
gtest_discover_tests(test_hello)
