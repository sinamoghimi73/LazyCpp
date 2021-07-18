//
//  powersOfTwo.hpp
//  Math
//

#ifndef powersOfTwo_h
#define powersOfTwo_h

#include <vector>

namespace math {

bool isPowerOfTwo(int number) {
  return ((number > 0) and !(number & (number - 1)));
}

} // namespace math

#endif /* powersOfTwo_h */
