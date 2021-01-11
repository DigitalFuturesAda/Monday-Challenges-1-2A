// https://repl.it/@B3GHU8/1-2A-E2#main.cpp

#include <iostream>
#include <algorithm>

void convertToLowerCase(std::string &str) {
    std::transform(str.begin(), str.end(), str.begin(),
                   [](unsigned char c){ return std::tolower(c); });
}

enum Temperature {
    Centigrade, Fahrenheit
};

double getTemp() {
    std::string tempInput;
    double temp;

    std::cout << "Please enter the starting temperature: ";
    getline(std::cin, tempInput);

    try {
        temp = std::stod(tempInput);
    } catch(const std::exception&) {
        std::cout << "Invalid input, please enter an integer or float." << std::endl;
        return getTemp();
    }

    return temp;
}

Temperature getConversion() {
    std::string conversion;
    std::cout
        << "Press ‘C’ to convert from Fahrenheit to Centigrade." << std::endl
        << "Press ‘F’ to convert from Centigrade to Fahrenheit." << std::endl << std::endl;
    std::cout << "Your choice: ";

    getline(std::cin, conversion);
    convertToLowerCase(conversion);

    if (conversion.size() == 1){
        if (conversion == "c"){
            return Centigrade;
        } else if (conversion == "f"){
            return Fahrenheit;
        } else {
            return getConversion();
        }
    } else {
        return getConversion();
    }
}

int main() {
    double inputTemp = getTemp();
    Temperature conversion = getConversion();
    double convertedOutput;

    if (conversion == Centigrade){
        convertedOutput = (inputTemp - 32) * 5/9;
    } else {
        convertedOutput = (inputTemp * 9 / 5) + 32;
    }

    std::cout << inputTemp << " degrees " << (conversion == Centigrade ? "Fahrenheit" : "Centigrade") <<  " is "
        << convertedOutput << " degrees " << (conversion == Centigrade ? "Centigrade" : "Fahrenheit");
}
