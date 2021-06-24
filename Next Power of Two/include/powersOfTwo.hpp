//
//  powersOfTwo.hpp
//  Math
//

#ifndef powersOfTwo_h
#define powersOfTwo_h

#include <algorithm>
#include <vector>

namespace math {

bool isPowerOfTwo(int number) { return number && !(number & (number - 1)); }

int nextPowerOfTwo(int number) {
  if (isPowerOfTwo(number))
    return number;

  int twosPower{1};
  while (twosPower < number)
    twosPower <<= 1;

  return twosPower;
}

} // namespace math

#endif /* powersOfTwo_h */
