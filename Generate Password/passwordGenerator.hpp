//
//  passwordGenerator.hpp
//  S1N4M
//

#ifndef passwordGenerator_hpp
#define passwordGenerator_hpp

#include <ctime>
#include <iostream>
#include <string>

class passwordGenerator {
public:
  passwordGenerator(size_t size = 0);

  void generatePassword();

  std::string getPassword();

private:
  const size_t _size{};
  const std::string _capitalLetters{}, _smallLetters{}, _numbers{}, _symbols{},
      _alphaNumeric{};
  const int _alphaNumericSize{};
  std::string _password{};
};

#endif /* passwordGenerator_hpp */
