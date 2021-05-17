//
//  main.cpp
//  Math
//

#include "math.hpp"
#include <iostream>
#include <limits>

int main() {
  std::cout << "Your Entry : ";
  std::string entry{};
  std::getline(std::cin, entry);

  std::vector<std::string> standardizedString{math::standardString(entry)};

  (standardizedString.size() > 1)
      ? math::permutationGenerator(standardizedString,
                                   standardizedString.size())
      : math::permutationGenerator(entry, entry.size());
}
