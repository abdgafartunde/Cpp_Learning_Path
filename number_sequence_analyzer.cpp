#include <iostream>
#include <limits>

int main() {
    int count = 0;
    double sum = 0.0;
    double number;
    
    while (true) {
        std::cout << "Enter a number (or type '-1' to stop): ";
        std::cin >> number;
        if (number == -1) {
            break;
        }
        sum += number;
        count++;
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            continue; // Prompt for input again
        }


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