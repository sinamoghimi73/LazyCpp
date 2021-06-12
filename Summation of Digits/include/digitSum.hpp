//
//  digitSum.hpp
//  Math
//
//  Created by Sina Moghimi on 6/13/21.
//

#ifndef digitSum_h
#define digitSum_h

namespace math {

int digitSum(const int &n) { return (n < 10) ? n : digitSum(n % 10 + n / 10); }

} // namespace math

#endif /* digitSum_h */
