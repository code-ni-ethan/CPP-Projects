#include <iostream>

int main(){

    double temp1;
    double newTemp;
    char unit;

    std::cout << "Welcome to the temperature conversion program." << '\n';
    std::cout << "What will you be converting to? (C or F): ";
    std::cin >> unit;

    if(unit == 'C' || unit == 'c'){
        std::cout << "Enter your temperature in Fahrenheit: ";
        std::cin >> temp1;
        newTemp =  (temp1 - 32) * 5/9;

        std::cout << "Your temperature in Fahrenheit was " << temp1 << '\n';
        std::cout << "Your temperature in Celsius is: " << newTemp << "C";
    }
    else if(unit == 'F' || unit == 'f'){

        std::cout << "Enter your temperature in Celsius: ";
        std::cin >> temp1;
        newTemp =  (temp1 * 1.8) + 32;

        std::cout << "Your temperature in Celsius was " << temp1 << '\n';
        std::cout << "Your temperature in Fahrenheit is: " << newTemp << "F";
 
    }
    else{
        std::cout << "Please enter a valid unit. (C or F only!)";
    }

    return 0;
}
