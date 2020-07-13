#include "number_lib.hpp"

#include <numeric>

namespace number_lib
{
number_real dot_product(const std::vector<number_real> &u,
                        const std::vector<number_real> &v)
{
  return std::inner_product(
    std::begin(u), std::end(u), std::begin(v), number_real{});
}
} // namespace number_lib

// exports claim
template struct number_lib::number<int>;
template struct number_lib::number<long double>;