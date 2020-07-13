cmake_minimum_required(VERSION 3.7.13)

project(cpp_python_workflow)

# options
set(CMAKE_CXX_STANDARD 17)

# deps
find_package(Boost COMPONENTS unit_test_framework) # Boost
add_subdirectory(pybind11) # Pybind11

# this is the include root
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# targets
add_subdirectory(lib)
if(TARGET Boost::unit_test_framework)
  add_subdirectory(tests)
endif()
if(TARGET pybind11::pybind11)
  add_subdirectory(pylib)
endif()
