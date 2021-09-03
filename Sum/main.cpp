#include <iostream>
#include <vector>

template <typename... Args> auto sum(Args &&...args) { return (args + ...); }

int main() {
  std::cout << sum(2, 3.1415, 38.921, 1000) << "\n";

  return 0;
}
