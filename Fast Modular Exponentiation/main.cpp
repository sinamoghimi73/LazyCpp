//
//  main.cpp
//  S1N4M

#include <iostream>
#include <vector>

int fastModularExponentiation(const int &base, const int &power,
                              const int &modulo) {
  int x{1}, n(ceil(log2(power))), modularPower{base % modulo}, mask{1};

  for (int i{}; i < n; ++i) {
    if (power & mask)
      x = (x * modularPower) % modulo;
      modularPower = (modularPower * modularPower) % modulo;
    mask <<= 1;
  }

  return x;
}

int main() {
  std::cout << "Enter b, p, m as b^p mod m : ";

  int b{}, p{}, m{};
  std::cin >> b >> p >> m;
  std::cout << fastModularExponentiation(b, p, m) << std::endl;

  return 0;
}
