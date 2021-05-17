//
//  permutationGenerator.hpp
//  Math
//

#ifndef permutationGenerator_h
#define permutationGenerator_h

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace math {

std::vector<std::string> standardString(std::string &a) {
  std::string token{};
  std::vector<std::string> standardInput{};

  std::istringstream linestream(a);
  while (std::getline(linestream, token, ' '))
    standardInput.push_back(token);

  return standardInput;
}

template <class entryType> void LOG(entryType &inputVector) {
  for (const auto &s : inputVector)
    std::cout << s;
  std::cout << "\n";
}

template <class entryType, class entrySize>
void permutationGenerator(entryType &a, entrySize size) {
  if (size == 1)
    LOG(a);

  for (int i = 0; i < size; i++) {
    permutationGenerator(a, size - 1);

    (math::isEven(size)) ? std::swap(a.at(0), a.at(size - 1))
                         : std::swap(a.at(i), a.at(size - 1));
  }
}
} // namespace math

#endif /* permutationGenerator_h */
