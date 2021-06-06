//
//  main.cpp
//  Math
//

#include "math.hpp"
#include <iostream>

void LOG(int &number, const std::vector<int> &array) {
  std::string expression{};
  std::cout << "Number " << number << " can be written as: ";
  for (const int &twosPower : array)
    expression += std::to_string(twosPower) + "+";

  expression.pop_back();
  std::cout << expression << std::endl;
}

int main() {
  int number{};
  std::cin >> number;
  LOG(number, math::powersOfTwo(number));
  return 0;
}
