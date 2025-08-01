#include <iostream>
#include <limits>

// Calculate factorial of n, returns unsigned long long
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    const int MAX_SAFE_N = 20; // Approximate limit for unsigned long long

    while (true) {
        std::cout << "Enter a non-negative integer to calculate its factorial: ";
        std::cin >> number;

        if (std::cin.fail() || number < 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
            continue;
        }
        if (number > MAX_SAFE_N) {
            std::cout << "Input too large, may cause overflow. Try a number <= " << MAX_SAFE_N << "." << std::endl;
            continue;
        }
        break;
    }

    unsigned long long result = factorial(number);
    std::cout << "Factorial of " << number << " is: " << result << std::endl;

    return 0;
}