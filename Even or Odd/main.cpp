//
//  main.cpp
//  S1N4M
//

#include "math.hpp"
#include <iostream>

int main() {

  std::cout << "Enter a number: ";

  int number{};
  std::cin >> number;

  std::cout << "Integer " << number << " is "
            << ((math::isEven(number) == true) ? "Even" : "Odd") << "\n";

  return 0;
}
