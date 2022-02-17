#include <iostream>
#include <memory>
#include <vector>

int main() {

  size_t number{};
  std::cin >> number;
  std::unique_ptr<std::vector<bool>> prime_list{
      std::make_unique<std::vector<bool>>(number, true)};

  for (int i{2}; i < number; i++)
    for (int j{i * i}; j < number; j += i)
      prime_list->at(j) = false;

  std::cout << "********---SEXY PRIME SETS---********\n";
  size_t last_number{};
  for (size_t i{5}; i < number; i += 2)
    if (prime_list->at(i))
      for (size_t j{i}; j < number; j += 6)
        if (prime_list->at(j)) {
          std::cout << ((last_number > j) ? "\n" : "") << j << " ";
          last_number = j, prime_list->at(j) = false;
        }

  std::cout << "\n";
  return 0;
}
