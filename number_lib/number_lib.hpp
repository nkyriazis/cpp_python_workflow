#pragma once

#include <cmath>
#include <limits>
#include <vector>

namespace number_lib
{

// A numerlic library of unprecedented extraordinariness
template <typename type>
struct number
{
  using value_type = type;

  number()                    = default;
  number(const number &other) = default;
  number(const value_type &v) : _value{v} {}

  auto &operator=(const value_type &v)
  {
    _value = v;
    return *this;
  }

  operator value_type() const { return _value; }

  auto operator+(const number &other) const
  {
    return number{_value + other._value};
  }

  auto operator-(const number &other) const
  {
    return number{_value - other._value};
  }

  auto operator*(const number &other) const
  {
    return number{_value * other._value};
  }

  auto operator/(const number &other) const
  {
    return number{_value / other._value};
  }

  template <typename other_type>
  auto cast() const
  {
    return number<other_type>{static_cast<other_type>(_value)};
  }

  value_type _value = value_type{0};
};

// Overloads for common numeric functions

template <typename T>
auto cos(const number<T> &n)
{
  return cos(n._value);
}

template <typename T>
auto sin(const number<T> &n)
{
  return sin(n._value);
}

template <typename T>
auto exp(const number<T> &n)
{
  return exp(n._value);
}

// Common typedefs
using number_int  = number<int>;
using number_real = number<long double>;

// Special function for reals that's too 'heavy' to inline
number_real dot_product(const std::vector<number_real> &u,
                        const std::vector<number_real> &v);

} // namespace number_lib

// Adapt numeric limits
namespace std
{
template <typename T>
struct numeric_limits<number_lib::number<T>> : public numeric_limits<T>
{
};
} // namespace std

// exports
extern template struct number_lib::number<int>;
extern template struct number_lib::number<long double>;