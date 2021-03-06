//
//  reducedDigitSum.hpp
//  Math
//
//  Created by Sina Moghimi on 6/13/21.
//

#ifndef reducedDigitSum_h
#define reducedDigitSum_h

namespace math {

// int digitSum(const int &n) { return (n < 10) ? n : digitSum(n % 10 + n / 10);
// }
int reducedDigitSum(const int &n) { return (n == 0) ? 0 : ((n % 9 == 0) ? 9 : n % 9); }

} // namespace math

#endif /* digitSum_h */
