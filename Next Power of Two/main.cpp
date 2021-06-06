//
//  main.cpp
//  Math
//

#include <iostream>
#include "math.hpp"


int main() {
  int number{};
  std::cin >> number;
  std::cout << math::nextPowerOfTwo(number) << "\n";
  return 0;
}
