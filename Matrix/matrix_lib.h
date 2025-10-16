#ifndef MATRIX_LIB_H
#define MATRIX_LIB_H

#include <vector>

namespace MatrixLib {
    // Function prototypes for matrix operations
    std::vector<std::vector<double>> add(const std::vector<std::vector<double>> &A, 
                                        const std::vector<std::vector<double>> &B);
    std::vector<std::vector<double>> multiply(const std::vector<std::vector<double>> &A, 
                                             const std::vector<std::vector<double>> &B);
    double determinant(const std::vector<std::vector<double>> &A);
    void printMatrix(const std::vector<std::vector<double>> &A);
}

#endif