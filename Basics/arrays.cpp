#include <iostream>
#include <iomanip>

int main() {
    const int SIZE = 7;

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


    int values[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "Values array elements: [ ";
    for (auto val : values) {
        std::cout << val << " ";
    }
    std::cout << "]" << std::endl;
    std::cout << "Size of values array: " << sizeof(values) / sizeof(values[0]) << std::endl;
    

    return 0;
}