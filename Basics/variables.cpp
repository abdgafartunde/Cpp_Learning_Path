#include <iostream>

int main(){
    // This program demonstrates variable declaration and basic arithmetic operations in C++.
    
    int x = 10; 
    int y = 20;
    double z = 15.5; // Declare a double variable
    char c = 'A'; // Declare a char variable
    bool isTrue = true; // Declare a boolean variable

    int sum = x + y; // Calculate the sum of x and y
    int product = x * y; // Calculate the product of x and y
    int difference = y - x; // Calculate the difference of y and x
    int quotient = y / x; // Calculate the quotient of y and x
    double zSquared = z * z; // Calculate the square of z


    // Print the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Square of z: " << zSquared << std::endl;
    std::cout << "Character: " << c << std::endl;
    std::cout << "Boolean value: " << isTrue << std::endl;

    std::string message = "This project uses C++14 standard.";
    std::cout << message << "\n";

    return 0;
}