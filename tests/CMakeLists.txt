add_executable(tests tests.cpp)
target_link_libraries(tests number_lib Boost::unit_test_framework Boost::dynamic_linking)
