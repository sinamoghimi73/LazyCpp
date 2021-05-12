//
//  main.cpp
//  S1N4M
//

#include "passwordGenerator.hpp"
#include <ctime>
#include <iostream>
#include <string>

std::string password(int &length) {
  passwordGenerator password(length);
  password.generatePassword();
  return password.getPassword();
}

int main() {
  std::cout << "Length of the password: ";

  int length{};
  std::cin >> length;

  std::cout << "Generated password: " << password(length) << std::endl;

  return 0;
}
