// Exercise 5

#include <iostream>
#include <cmath>
#include <limits>

bool is_prime(int number) {
    if (number < 2){
        return false;
    }
    for (int i = 2; i <= int(sqrt(number)); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    std::cout << "Enter a positive integer to check if it is prime: ";
    std::cin >> number;

    if (std::cin.fail() || number < 0) {
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1;
    }

    if (is_prime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}