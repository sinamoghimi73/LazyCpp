//
//  powersOfTwo.hpp
//  Math
//

#ifndef powersOfTwo_h
#define powersOfTwo_h

#include <algorithm>
#include <vector>

namespace math {

std::vector<int> powersOfTwo(int number) {
  int twosPower{1};
  std::vector<int> powersOfTwo{};

  while (twosPower < number) {
    if (twosPower & number)
      powersOfTwo.push_back(twosPower);
    twosPower <<= 1;
  }

  std::reverse(powersOfTwo.begin(), powersOfTwo.end());
  return powersOfTwo;
}

} // namespace math

#endif /* powersOfTwo_h */
