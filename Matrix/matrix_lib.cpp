#include "matrix_lib.h"
#include <iostream>
#include <stdexcept>

namespace MatrixLib {
    std::vector<std::vector<double>> add(const std::vector<std::vector<double>> &A, 
                                        const std::vector<std::vector<double>> &B) {
        if (A.empty() || B.empty()) {
            throw std::invalid_argument("Matrices cannot be empty");
        }
        if (A.size() != B.size() || A[0].size() != B[0].size()) {
            throw std::invalid_argument("Matrix dimensions must match");
        }
        
        std::vector<std::vector<double>> result(A.size(), std::vector<double>(A[0].size()));
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < A[0].size(); ++j) {
                result[i][j] = A[i][j] + B[i][j];
            }
        }
        return result;
    }

    std::vector<std::vector<double>> multiply(const std::vector<std::vector<double>> &A, 
                                             const std::vector<std::vector<double>> &B) {
        if (A.empty() || B.empty()) {
            throw std::invalid_argument("Matrices cannot be empty");
        }
        if (A[0].size() != B.size()) {
            throw std::invalid_argument("Number of columns in A must equal number of rows in B");
        }
        
        std::vector<std::vector<double>> result(A.size(), std::vector<double>(B[0].size(), 0.0));
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < B[0].size(); ++j) {
                for (size_t k = 0; k < B.size(); ++k) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        return result;
    }

    double determinant(const std::vector<std::vector<double>> &A) {
        if (A.empty()) {
            throw std::invalid_argument("Matrix cannot be empty");
        }
        if (A.size() != A[0].size()) {
            throw std::invalid_argument("Matrix must be square");
        }
        
        size_t n = A.size();
        if (n == 1) return A[0][0];
        if (n == 2) return A[0][0] * A[1][1] - A[0][1] * A[1][0];
        
        double det = 0.0;
        for (size_t col = 0; col < n; ++col) {
            std::vector<std::vector<double>> submatrix(n - 1, std::vector<double>(n - 1));
            for (size_t i = 1; i < n; ++i) {
                size_t subCol = 0;
                for (size_t j = 0; j < n; ++j) {
                    if (j != col) {
                        submatrix[i - 1][subCol++] = A[i][j];
                    }
                }
            }
            det += (col % 2 == 0 ? 1 : -1) * A[0][col] * determinant(submatrix);
        }
        return det;
    }

    void printMatrix(const std::vector<std::vector<double>> &A) {
        if (A.empty()) {
            std::cout << "Empty matrix\n";
            return;
        }
        for (const auto& row : A) {
            for (double val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }
}