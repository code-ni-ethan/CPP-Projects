#include <iostream>
#include <cmath>

// Calculate the hypotenuse of a right triangle.

// Formula is c = sqrt a^2 + b^2

int main() {

    double a;
    double b;

    std::cout << "What is the leg value for 'a'?: ";
    std::cin >> a;
    std::cout << "What is the leg value for 'b'?: ";
    std::cin >> b;

   double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hypotenuse is " << c << '\n';
    
    return 0;

}
