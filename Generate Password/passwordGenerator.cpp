//
//  passwordGenerator.cpp
//  S1N4M
//

#include "passwordGenerator.hpp"

passwordGenerator::passwordGenerator(size_t size)
    : _size{size}, _capitalLetters{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"},
      _smallLetters{"abcdefghijklmnopqrstuvwxyz"}, _numbers{"0123456789"},
      _symbols{"!@#$%^&*\[]/\'\"{}()?|-_+<>~"},
      _alphaNumeric{_capitalLetters + _smallLetters + _numbers + _symbols},
      _alphaNumericSize{static_cast<int>(_alphaNumeric.size())}, _password(_size, ' ') {
  // use current time as seed for random generator
  std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void passwordGenerator::generatePassword() {
  for (size_t i{0}; i < _size; ++i)
    _password.at(i) =
        ((i > 0 and i % 5 == 0) ? '-' : _alphaNumeric.at(rand() % _alphaNumericSize));
}

std::string passwordGenerator::getPassword() { return _password; }
