// https://repl.it/@B3GHU8/1-2B-E4

#include <iostream>

int main() {
  try {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // modulus operator https://en.wikipedia.org/wiki/Modulus
    // ternary is like if statement but in line
    std::cout << number << " is an " << 
      (number % 2 == 0 ? "even" : "odd") << " number" << std::endl;
    main();
  } catch (...){
    // catch everything and say enter a valid number
    std::cout << "Enter a valid number" << std::endl;
    main();
  }
}
