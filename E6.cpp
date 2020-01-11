// https://repl.it/@B3GHU8/1-2B-E6

#include <iostream>
#include <cmath> // math lib

int main() {
  int age, pulse;
  double intensity = 0.4;
  // declare variables

  std::cout << "Enter age: ";
  std::cin >> age;

  std::cout << "Enter resting pulse: ";
  std::cin >> pulse;

  while (intensity <= 0.95) {
    // declare variables #bodmas
    double bpm = (((220 - age) - pulse) * intensity) + pulse;

    // escape character \t = TAB character (ie 8 spaces), but can change depending on terminal config etc
    std::cout << (intensity * 100) << "% \t\t" << round(bpm) << " bpm" << std::endl;
    intensity = intensity + 0.05;
    // redeclare intensity as the same + 0.05
  }
}