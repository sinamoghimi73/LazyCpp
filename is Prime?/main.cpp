//
//  main.cpp
//  Math
//

#include "include/math.hpp"
#include <iostream>

int main() {
  int number{};
  std::cin >> number;
  std::cout << math::isPrime(number) << std::endl;
  return 0;
}
