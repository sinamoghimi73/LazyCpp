//
//  main.cpp
//  S1N4M
//

#include <iostream>

bool isEven(int &number) { return !(number & 1); }

int main() {

  std::cout << "Enter a number: ";

  int number{};
  std::cin >> number;

  std::cout << "Integer " << number << " is "
            << ((isEven(number) == true) ? "Even" : "Odd") << "\n";

  return 0;
}
