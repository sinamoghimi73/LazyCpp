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

void printAllCombinations(int target, int current_sum, int start,
                          const std::vector<int> &notes,
                          std::vector<int> &coeff) {

  if (target == current_sum) {
    LOG(notes, coeff, static_cast<int>(notes.size()));
  }

  for (int i{start}; i < notes.size(); ++i) {
    int temp_sum{current_sum + notes.at(i)};
    if (temp_sum <= target) {
      coeff.at(i) += 1;
      printAllCombinations(target, temp_sum, i, notes, coeff);
      coeff.at(i) -= 1;
    } else
      return;
  }
}

void bankNotesCombination(const int &target, std::vector<int> &notes) {
  std::vector<int> coeffVector(notes.size());
  std::sort(notes.begin(), notes.end());
  printAllCombinations(target, 0, 0, notes, coeffVector);
}

int main() {
  std::vector<int> notes{2, 1, 5};
  int noteSummation{};
  std::cin >> noteSummation;
  bankNotesCombination(noteSummation, notes);
}