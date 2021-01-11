// https://repl.it/@B3GHU8/1-2A-E1#main.cpp

#include <iostream>

int main() {
    // declare variables
    std::string author;
    std::string quote;

    // pipe str into out
    std::cout << "What is the quote? ";
    getline(std::cin, quote);
    // pipe in into quote

    std::cout << "Who said it? ";
    getline(std::cin, author);
    // ditto

    // uses escape characters to posiiton " inside of ""
    std::cout << author << " says: \"" << quote << "\"" << std::endl;

    return 0;
}
