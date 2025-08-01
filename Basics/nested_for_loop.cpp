#include <iostream>

int main() {
    int rows, cols;
    char symbol;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << symbol << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "i: " << i << ", j: " << j << std::endl;
        }
    }


    return 0;
}