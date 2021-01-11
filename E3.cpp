// https://repl.it/@B3GHU8/1-2A-E3#main.cpp

#include <iostream> // Imports io stream 
#include <algorithm> // Imports library needed for string transformations

double getDoubleInput(const std::string& input){
    std::string doubleInput; // declares a variable as type string
    double convertedInput;

    std::cout << input;
    getline(std::cin, doubleInput);

    try {
      // attempts to convert str to double, an exception is thrown if it fails in which case the catch block is ran which recursively calls the function again
        convertedInput = std::stod(doubleInput);
        if (convertedInput < 1){
            std::cout << "Invalid input, please enter a positive number greater than 0." << std::endl;
            return getDoubleInput(input);
            // recursively call the function if the input is less than 1
        }
    } catch(const std::exception&) {
        std::cout << "Invalid input, please enter an integer or float." << std::endl;
        return getDoubleInput(input);
    }

    return convertedInput;
}

int main() {
  // declares a variable double
    double squareFeetToSquareMeters = 10.764;

  // gets input and sets it to roomLength/Width
    double roomLength = getDoubleInput("What is the length of the room in feet? ");
    double roomWidth = getDoubleInput("What is the width of the room in feet? ");

    double areaFeet = roomLength * roomWidth;
    double areaMeters = areaFeet / squareFeetToSquareMeters;
    // calculations

    // outputs to the terminal
    std::cout << "Your room’s dimension is " << roomLength << " by " << roomWidth << " feet, the area is:" << std::endl;
    std::cout << areaFeet << " square feet" << std::endl;
    std::cout << areaMeters << " square meters" << std::endl;
}
