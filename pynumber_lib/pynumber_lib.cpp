#include <number_lib/number_lib.hpp>
#include <pybind11/operators.h>
#include <pybind11/pybind11.h>

using namespace number_lib;
namespace py = pybind11;

PYBIND11_MODULE(pynumber_lib, m)
{
  py::class_<number_int>(m, "number_int")
    .def(py::init<>())
    .def(py::init<const int>())
    .def_readwrite("_value", &number_int::_value)
    .def(py::self + py::self)
    .def(py::self - py::self)
    .def(py::self * py::self)
    .def(py::self / py::self);

  py::class_<number_real>(m, "number_real")
    .def(py::init<>())
    .def(py::init<const long double>())
    .def_readwrite("_value", &number_real::_value)
    .def(py::self + py::self)
    .def(py::self - py::self)
    .def(py::self * py::self)
    .def(py::self / py::self);
}