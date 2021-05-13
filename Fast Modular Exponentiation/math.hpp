//
//  math.hpp
//  S1N4M
//

#ifndef math_hpp
#define math_hpp

#include <cmath>
#include <vector>

class math {
public:
  static int fastModularExponentiation(const int &base, const int &power,
                                       const int &modulo);
};

#endif /* math_hpp */
