#include <iostream>
#include <iomanip>

int main() {
    const int SIZE = 5;

    std::cout << "Array Basics in C++" << std::endl;
    std::cout << "Enter temperatures for " << SIZE << " days:" << std::endl;

    double temperatures[SIZE];
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Day " << (i + 1) << ": ";
        std::cin >> temperatures[i];
    }

    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += temperatures[i];
    }
    double average = sum / SIZE;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Average temperature: " << average << " C" << std::endl;

    return 0;
}