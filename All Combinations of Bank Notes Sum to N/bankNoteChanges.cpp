#include <iostream>
#include <string>
#include <vector>

void buildOutput(std::string &output, const std::vector<int> &notes,
                 const std::vector<int> &coefficientVector, const int &n) {
  for (unsigned int i{}; i < n; ++i)
    if (coefficientVector.at(i) != 0)
      output += (std::to_string(coefficientVector.at(i)) + "*" +
                 std::to_string(notes.at(i)) + " + ");
  output.pop_back();
  output.pop_back();
}

void print(const std::vector<int> &notes,
           const std::vector<int> &coefficientVector, const int &n) {
  std::string output{};
  buildOutput(output, notes, coefficientVector, n);
  std::cout << output << "\n";
}

void printAllCombinations(const std::vector<std::vector<int>> &combinations,
                          const std::vector<int> &notes,
                          const int &notesCount) {
  for (const std::vector<int> &coefficients : combinations)
    print(notes, coefficients, notesCount);
}

void generateAllCombinations(int target, int startIndex,
                             const std::vector<int> &notes,
                             std::vector<int> &coefficients,
                             const int &notesCount,
                             std::vector<std::vector<int>> &combinations) {

  if (target == 0) {
    combinations.push_back(coefficients);
  }

  for (int i{startIndex}; i < notesCount; ++i) {
    if (target - notes.at(i) >= 0) {
      coefficients.at(i) += 1;
      generateAllCombinations(target - notes.at(i), i, notes, coefficients,
                              notesCount, combinations);
      coefficients.at(i) -= 1;
    } else
      return;
  }
}

void bankNotesCombination(const int &target, std::vector<int> &notes,
                          const int &notesCount) {
  std::vector<std::vector<int>> combinations{};
  std::vector<int> coefficientVector(notesCount);
  std::sort(notes.begin(), notes.end());
  int startIndex{};
  generateAllCombinations(target, startIndex, notes, coefficientVector,
                          notesCount, combinations);
  printAllCombinations(combinations, notes, notesCount);
}

int main() {
  std::vector<int> notes{2, 1, 5};
  int noteSummation{};
  std::cin >> noteSummation;
  bankNotesCombination(noteSummation, notes, static_cast<int>(notes.size()));
  return 0;
}
