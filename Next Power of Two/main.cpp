//
//  main.cpp
//  Math
//

#include "math.hpp"
#include <iostream>

int main() {
  int number{};
  std::cin >> number;
  std::cout << math::nextPowerOfTwo(number) << "\n";
  return 0;
}
