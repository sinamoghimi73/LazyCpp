#include <iostream>

template <typename T> T floorDivision(const size_t &a, const size_t &b) {
  return static_cast<T>(a / b);
}

template <typename A, typename B, typename C>
size_t countNaturalNumbers(const A &a, const B &l, const C &multiplier) {
  return ((l - a) / multiplier) + 1;
}

size_t arithmeticSeqSum(const size_t &a, const size_t &l,
                        const size_t &multiplier) {
  size_t first_multiplicand{
      (floorDivision<size_t>(a, multiplier) + (a % multiplier != 0)) *
      multiplier},
      count{countNaturalNumbers(first_multiplicand, l, multiplier)},
      last_multiplicand{first_multiplicand + (count - 1) * multiplier};
  return count * (first_multiplicand + last_multiplicand) / 2;
}

int main(int argc, const char *argv[]) {
  size_t first_num{1}, last_num{999};

  std::cout << arithmeticSeqSum(first_num, last_num, 3) +
                   arithmeticSeqSum(first_num, last_num, 5) -
                   arithmeticSeqSum(first_num, last_num, 15)
            << "\n";
  return 0;
}
