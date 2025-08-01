#include <iostream>
#include <iomanip>
#include <limits>

// Read numbers until a negative number is entered, return true if valid input
bool read_numbers(double& sum, int& count) {
    double number;
    std::cout << "Enter a number (negative to stop): ";
    std::cin >> number;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        return false;
    }

    if (number < 0) {
        return true; // Stop condition met
    }

    sum += number;
    count++;
    return false; // Continue reading
}

int main() {
    double sum = 0.0;
    int count = 0;
    
    std::cout << std::fixed << std::setprecision(2);
    while (!read_numbers(sum, count)) {
        // Continue until negative number or error
    }

    if (count == 0) {
        std::cout << "No valid numbers were entered." << std::endl;
    } else {
        double average = sum / count;
        std::cout << "You entered " << count << " valid numbers." << std::endl;
        std::cout << "Sum: " << sum << ", Average: " << average << std::endl;
    }

    return 0;
}