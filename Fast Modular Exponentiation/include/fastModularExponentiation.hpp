//
//  fastModularExponentiation.hpp
//  Math
//

#ifndef fastModularExponentiation_h
#define fastModularExponentiation_h

#include <cmath>

namespace math {

int fastModularExponentiation(const int &base, const int &power,
                              const int &modulo) {
  int x{1}, n(ceil(log2(power))), modularPower{base % modulo}, mask{1};

  for (int i{}; i < n; ++i) {
    if (power & mask)
      x = (x * modularPower) % modulo;
    modularPower = (modularPower * modularPower) % modulo;
    mask <<= 1;
  }
  return x;
}

} // namespace math

#endif /* fastModularExponentiation_h */
