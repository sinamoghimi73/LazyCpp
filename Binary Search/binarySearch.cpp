#include <iostream>
#include <vector>

template <class T>
bool isInLowerHalf(const std::vector<T> &numberList, unsigned int &middleIndex,
                   const T &number) {
  return (numberList.at(middleIndex) > number);
}

template <class T>
bool numberIsFound(const std::vector<T> &numberList, unsigned int &middleIndex,
                   const T &target) {
  return numberList.at(middleIndex) == target;
}

bool noIndexOverlap(
    const std::pair<unsigned int, unsigned int> &indexPositions) {
  return indexPositions.second >= indexPositions.first;
}

template <class T>
int search(const std::vector<T> &numberList,
           const std::pair<unsigned int, unsigned int> &indexPositions,
           const T &target) {
  if (noIndexOverlap(indexPositions)) {
    unsigned int leftIndex{indexPositions.first},
        rightIndex{indexPositions.second},
        middleIndex{leftIndex + ((rightIndex - leftIndex) / 2)};

    if (numberIsFound(numberList, middleIndex, target))
      return middleIndex;

    if (isInLowerHalf(numberList, middleIndex, target))
      return search(numberList, std::make_pair(leftIndex, middleIndex - 1),
                    target);
    else
      return search(numberList, std::make_pair(middleIndex + 1, rightIndex),
                    target);
  }
  return -1;
}

int main() {
  std::vector<int> numberList{2, 3, 4, 10, 40};
  int target{10};
  unsigned int leftIndex{},
      rightIndex{static_cast<unsigned int>(numberList.size() - 1)};

  std::cout << search(numberList, std::make_pair(leftIndex, rightIndex), target)
            << "\n";
  return 0;
}
