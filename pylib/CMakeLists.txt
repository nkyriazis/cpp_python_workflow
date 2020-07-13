pybind11_add_module(pylib pylib.cpp)
target_link_libraries(pylib PRIVATE lib)
