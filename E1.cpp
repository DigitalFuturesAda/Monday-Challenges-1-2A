// https://repl.it/@B3GHU8/1-2A-E1#main.cpp
#include <iostream>

int main() {
    std::string author;
    std::string quote;

    std::cout << "What is the quote? ";
    getline(std::cin, quote);

    std::cout << "Who said it? ";
    getline(std::cin, author);

    std::cout << author << " says: \"" << quote << "\"" << std::endl;

    return 0;
}
