//
//  main.cpp
//  S1N4M

#include <ctime>
#include <iostream>
#include <string>

class passwordGenerator {
public:
  passwordGenerator(int size = 0)
      : _size{size},
        _alphaNumeric{"0123456789!@#$%^&*\[]/"
                      "{}\'\"`()?|-_+<>~"
                      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"},
        _alphaNumericSize{static_cast<int>(_alphaNumeric.size())} {
    // use current time as seed for random generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
  }

  void generatePassword() {
    for (int i{}; i < _size; ++i)
      _password += _alphaNumeric.at(rand() % _alphaNumericSize);
  }

  std::string getPassword() { return _password; }

private:
  const int _size{};
  const std::string _alphaNumeric{};
  const int _alphaNumericSize{};
  std::string _password{};
  int _index{};
};

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
