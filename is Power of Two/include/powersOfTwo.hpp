//
//  powersOfTwo.hpp
//  Math
//

#ifndef powersOfTwo_h
#define powersOfTwo_h

#include <vector>

namespace math {

bool isPowerOfTwo(const unsigned &number) {
  return ((number > 0) and !(number & (number - 1)));
}

// using popcount to count the number of 1's in binary format.
// or using has_single_bit to check if it has only sigle 1 bit in binary format.
// bool isPowerOfTwo(const unsigned &number) {
//  return std::has_single_bit(number);
//}

} // namespace math

#endif /* powersOfTwo_h */
