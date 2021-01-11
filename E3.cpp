// https://repl.it/@B3GHU8/1-2A-E3#main.cpp

#include <iostream>
#include <algorithm>

double getDoubleInput(const std::string& input){
    std::string doubleInput;
    double convertedInput;

    std::cout << input;
    getline(std::cin, doubleInput);

    try {
        convertedInput = std::stod(doubleInput);
        if (convertedInput < 1){
            std::cout << "Invalid input, please enter a positive number greater than 0." << std::endl;
            return getDoubleInput(input);
        }
    } catch(const std::exception&) {
        std::cout << "Invalid input, please enter an integer or float." << std::endl;
        return getDoubleInput(input);
    }

    return convertedInput;
}

int main() {
    double squareFeetToSquareMeters = 10.764;

    double roomLength = getDoubleInput("What is the length of the room in feet? ");
    double roomWidth = getDoubleInput("What is the width of the room in feet? ");

    double areaFeet = roomLength * roomWidth;
    double areaMeters = areaFeet / squareFeetToSquareMeters;

    std::cout << "Your room’s dimension is " << roomLength << " by " << roomWidth << " feet, the area is:" << std::endl;
    std::cout << areaFeet << " square feet" << std::endl;
    std::cout << areaMeters << " square meters" << std::endl;
}
