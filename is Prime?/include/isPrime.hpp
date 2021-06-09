//
//  isPrime.hpp
//  Math
//
//  Created by Sina Moghimi on 6/9/21.
//

#ifndef isPrime_h
#define isPrime_h

namespace math {

bool isPrime(int number) {

  if (number == 2 or number == 3)
    return true;

  if (number <= 1 or number % 2 == 0 or number % 3 == 0)
    return false;

  for (int i{5}; i * i <= number; i += 6)
    if (number % i == 0 or number % (i + 2) == 0)
      return false;

  return true;
}

} // namespace math

#endif /* isPrime_h */
