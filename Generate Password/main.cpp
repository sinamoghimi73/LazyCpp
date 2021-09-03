//
//  main.cpp
//  S1N4M
//

#include "passwordGenerator.hpp"
#include <ctime>
#include <iostream>
#include <string>

std::string password(size_t &length) {
  passwordGenerator password(length);
  password.generatePassword();
  return password.getPassword();
}

int main() {
  std::cout << "Length of the password: ";

  size_t length{};
  std::cin >> length;

  std::cout << "Generated password: " << password(length) << std::endl;

  return 0;
}
