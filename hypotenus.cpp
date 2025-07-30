#include <iostream>
#include <cmath>

int main() {
    
    double a, b, c;

    std::cout << "Enter the length of the first side of the right triangle: ";
    std::cin >> a;

    std::cout << "Enter the length of the second side of the right triangle: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The length of the hypotenuse is: " << c << std::endl;

    return 0;
}