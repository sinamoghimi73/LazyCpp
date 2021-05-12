//
//  main.cpp
//  S1N4M

#include <ctime>
#include <iostream>
#include <string>

class passwordGenerator {
public:
  passwordGenerator(int size = 0)
      : _size{size}, _capitalLetters{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"},
        _smallLetters{"abcdefghijklmnopqrstuvwxyz"}, _numbers{"0123456789"},
        _symbols{"!@#$%^&*\[]/\'\"{}()?|-_+<>~"},
        _alphaNumeric{_capitalLetters + _smallLetters + _numbers + _symbols},
        _alphaNumericSize{static_cast<int>(_alphaNumeric.size())} {
    // use current time as seed for random generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
  }

  void generatePassword() {
    for (int i{1}; i <= _size; ++i)
      _password +=
          ((i % 6 == 0) ? '-' : _alphaNumeric.at(rand() % _alphaNumericSize));
  }

  std::string getPassword() { return _password; }

private:
  const int _size{};
  const std::string _capitalLetters{}, _smallLetters{}, _numbers{}, _symbols{},
      _alphaNumeric{};
  const int _alphaNumericSize{};
  std::string _password{};
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
