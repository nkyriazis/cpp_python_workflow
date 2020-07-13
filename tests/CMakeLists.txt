add_executable(tests tests.cpp)
target_link_libraries(tests lib Boost::unit_test_framework)
