#include <algorithm>
#include <iostream>
#include <vector>

size_t fib(size_t &&n) {
  std::vector<size_t> number_frame{0, 1, 1};

  for (size_t i{}; i < n - 2 and n >= 3;
       ++i, number_frame[2] = number_frame[0] + number_frame[1])
    std::rotate(number_frame.begin(), number_frame.begin() + 1,
                number_frame.end());

  return (n == 0) ? 0 : number_frame[2];
}

int main() {

  for (short i{}; i < 15; ++i)
    std::cout << fib(i) << "\n";

  return 0;
}
