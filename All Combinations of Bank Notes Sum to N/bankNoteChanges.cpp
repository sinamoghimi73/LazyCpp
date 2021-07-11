#include <iostream>
#include <string>
#include <vector>

void LOG(const std::vector<int> &notes, std::vector<int> &coefficientVector,
         const int &n) {
  std::string output{};
  for (unsigned int i{}; i < n; ++i)
    if (coefficientVector.at(i) != 0)
      output += (std::to_string(coefficientVector.at(i)) + "*" +
                 std::to_string(notes.at(i)) + " + ");
  output.pop_back();
  output.pop_back();
  std::cout << output << "\n";
}

void printAllCombinations(int target, int currentSum, int start,
                          const std::vector<int> &notes,
                          std::vector<int> &coeff, const int &notesCount) {

  if (target == currentSum) {
    LOG(notes, coeff, static_cast<int>(notesCount));
  }

  for (int i{start}; i < notesCount; ++i) {
    if (currentSum + notes.at(i) <= target) {
      coeff.at(i) += 1;
      printAllCombinations(target, currentSum + notes.at(i), i, notes, coeff,
                           notesCount);
      coeff.at(i) -= 1;
    } else
      return;
  }
}

void bankNotesCombination(const int &target, std::vector<int> &notes,
                          const int &notesCount) {
  std::vector<int> coeffVector(notesCount);
  std::sort(notes.begin(), notes.end());
  printAllCombinations(target, 0, 0, notes, coeffVector, notesCount);
}

int main() {
  std::vector<int> notes{2, 1, 5};
  int noteSummation{};
  std::cin >> noteSummation;
  bankNotesCombination(noteSummation, notes, static_cast<int>(notes.size()));
  return 0;
}
