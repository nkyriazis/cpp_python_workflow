#define BOOST_TEST_MODULE tests
#include <boost/mpl/list.hpp>
#include <boost/test/unit_test.hpp>

#include <lib/lib.hpp>

using namespace lib;

using number_types =
  boost::mpl::list<unsigned int, int, float, double, long double>;

BOOST_AUTO_TEST_CASE_TEMPLATE(construction_is_zero, T, number_types)
{
  number<T> num;
  BOOST_CHECK_EQUAL(num._value, T{0});
}

BOOST_AUTO_TEST_CASE_TEMPLATE(construction, T, number_types)
{
  number<T> num{T{3}};
  BOOST_CHECK_EQUAL(num._value, T{3});
}