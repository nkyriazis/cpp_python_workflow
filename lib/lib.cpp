#include "lib.hpp"

#include <numeric>

namespace lib
{
number_real dot_product(const std::vector<number_real> &u,
                        const std::vector<number_real> &v)
{
  return std::inner_product(
    std::begin(u), std::end(u), std::begin(v), number_real{});
}
} // namespace lib

// exports claim
template struct lib::number<int>;
template struct lib::number<long double>;