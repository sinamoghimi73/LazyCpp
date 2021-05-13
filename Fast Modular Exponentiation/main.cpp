//
//  main.cpp
//  S1N4M
//

#include "math.hpp"
#include <iostream>

int main() {
  std::cout << "Enter b, p, m as b^p mod m : ";

  int b{}, p{}, m{};
  std::cin >> b >> p >> m;
  std::cout << math::fastModularExponentiation(b, p, m) << std::endl;

  return 0;
}
