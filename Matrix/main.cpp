#include "matrix_lib.h"
#include <iostream>
#include <iomanip>

int main() {
    std::vector<std::vector<double>> A = {{1, 2}, {3, 4}};
    std::vector<std::vector<double>> B = {{5, 6}, {7, 8}};
    std::vector<std::vector<double>> C = {{2, 3, 1}, {4, 1, 2}, {1, 5, 3}};
    
    std::cout << std::fixed << std::setprecision(2);
    
    // Test Matrix Addition
    try {
        std::cout << "Matrix A:\n";
        MatrixLib::printMatrix(A);
        std::cout << "\nMatrix B:\n";
        MatrixLib::printMatrix(B);
        
        auto addResult = MatrixLib::add(A, B);
        std::cout << "\nA + B =\n";
        MatrixLib::printMatrix(addResult);
    } catch (const std::exception& e) {
        std::cerr << "Addition Error: " << e.what() << std::endl;
    }
    
    // Test Matrix Multiplication
    try {
        std::cout << "\n" << std::string(40, '=') << "\n\n";
        auto multiplyResult = MatrixLib::multiply(A, B);
        std::cout << "A * B =\n";
        MatrixLib::printMatrix(multiplyResult);
    } catch (const std::exception& e) {
        std::cerr << "Multiplication Error: " << e.what() << std::endl;
    }
    
    // Test Determinant
    try {
        std::cout << "\n" << std::string(40, '=') << "\n\n";
        std::cout << "Matrix C:\n";
        MatrixLib::printMatrix(C);
        
        double detA = MatrixLib::determinant(A);
        std::cout << "\nDeterminant of A: " << detA << std::endl;
        
        double detC = MatrixLib::determinant(C);
        std::cout << "Determinant of C: " << detC << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Determinant Error: " << e.what() << std::endl;
    }
    
    return 0;
}