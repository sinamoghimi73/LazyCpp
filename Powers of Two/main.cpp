//
//  main.cpp
//  Math
//

#include "math.hpp"
#include <iostream>

void LOG(const int &number, const std::vector<int> &array) {
  if (array.size() > 0) {
    std::string expression{};
    std::cout << "Number " << number << " can be written as: ";
    for (const int &twosPower : array)
      expression += std::to_string(twosPower) + "+";

    expression.pop_back();
    std::cout << expression << "\n";
  } else
    std::cout << "Number " << number << " itself, is a power of two.\n";
}

int main() {
  int number{};
  std::cin >> number;
  LOG(number, math::powersOfTwo(number));
  return 0;
}
