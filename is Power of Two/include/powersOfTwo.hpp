//
//  powersOfTwo.hpp
//  Math
//

#ifndef powersOfTwo_h
#define powersOfTwo_h

#include <vector>

namespace math {

bool isPowerOfTwo(int number) {
  int twosPower{number};
  while (twosPower > 0) {
    if ((twosPower & number) && (twosPower < number))
      return false;
    twosPower >>= 1;
  }
  return true;
}

} // namespace math

#endif /* powersOfTwo_h */
