
#include <iostream>

class Solution {
public:
  int binaryGap(int n) {
    int maxDistance{};
    unsigned int counts{};
    if (n <= 1)
      return 0;
    while ((n & 1) == 0) {
      n >>= 1;
    }

    while (n > 0) {
      if ((n & 1) == 1) {
        if (counts > maxDistance)
          maxDistance = counts;
        counts = 0;
      }
      counts++;
      n >>= 1;
    }
    return maxDistance;
  }
};

int main() {
  std::cout << Solution().binaryGap(22) << "\n";
  return 0;
}
