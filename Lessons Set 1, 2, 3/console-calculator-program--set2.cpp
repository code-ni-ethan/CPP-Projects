#include <iostream>

int main() {

    double num1;
    double num2;
    double result;
    char oprtr;

    std::cout << "Welcome to the calculator!" << '\n';
    std::cout << "Please select an operator (+, -, *, /): ";
    std::cin >> oprtr;
    
    std::cout << "Enter your first value: ";
        std::cin >> num1;
        std::cout << "Enter your second value: ";
        std::cin >> num2;  

    switch(oprtr){

        case '+':
        result = num1 + num2;
        std::cout << "The result is: " << result;
        break;

        case '-':
        result = num1 - num2;
        std::cout << "The result is: " << result;
        break;
        
        case '*':
        result = num1 * num2;
        std::cout << "The result is: " << result;
        break;

        case '/':
        result = num1 / num2;
        
        std::cout << "The result is: " << result;
        break;

    }

    return 0;
}
