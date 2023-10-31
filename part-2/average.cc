// Cardin Phan
// Phancardin@csu.fullerton.edu
// @Card1n
// Partners: @NathanJuar, @abelchavez24

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() - 1 < 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum = 0.0;
  int count = 0;

  for (int i = 1; i < arguments.size(); ++i) {
    double num = std::stod(arguments[i]);
    sum += num;
    count++;
  }

  double average{0.0};
  average = sum / count;

  std::cout << "average = " << average << "\n";

  return 0;
}
