#include <iostream>
#include <iomanip>
#include <cmath>
#include <cassert>

int main() {
    // This is a simple C++ program that prints a message to the console.

    std::cout << "Hello, World! BAE" << std::endl;
    std::cout << "This project uses C++14 standard." << std::endl;
    std::cout << "This is a simple C++ program." << std::endl;
    std::cerr << "This is an error message." << std::endl;
    std::clog << "This is a log message." << std::endl;

    signed int val = 78;
    unsigned int uval = -45;
    unsigned int uval2{34};
    std::cout << "Val is: " << val;
    std::cout << "\nUval is: " << uval << std::endl;
    std::cout << "\nUval2 is: " << uval2 << std::endl;
    
    short signed int sval = -4567;
    long signed int lval = 567890;
    long long signed int llval = -1234567890;
    std::cout << std::left;
    std::cout << std::setfill('=');
    std::cout << std::setw(30) << "Size of short int: " << sizeof(sval) << " bytes" << std::endl;
    std::cout << std::setw(30) << "Size of long int: " << sizeof(lval) << " bytes" << std::endl;
    std::cout << std::setw(30) << "Size of long long int: " << sizeof(llval) << " bytes" << std::endl;

    std::cout << std::setprecision(10);
    float fval = 3.1415956f;
    double dval = 3.1415941e-33;
    std::cout << "Dval is: " << dval << std::endl;
    std::cout << "Fval is: " << fval << std::endl;

    bool bval = true;
    std::cout << "Bval is: " << bval << std::endl;
    std::cout << std::boolalpha; // Print bool as true/false
    std::cout << "Bval is: " << bval << std::endl;

    double num = 9.0;
    std::cout << "Absolute value of " << num << " is " << abs(num) << std::endl;
    std::cout << "Float Absolute value of " << num << " is " << fabs(num) << std::endl;

    std::cout << int(num) << std::endl;

    int array1[5] = {1, 2, 3, 4, 5};
    std::cout << "Array1 elements: ";
    for (int i = 0; i < sizeof(array1) / sizeof(array1[0]); ++i) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    double matrix[3][4][5] = {
        {
            {0.0, 1.1, 2.2, 3.3, 4.4},
            {5.5, 6.6, 7.7, 8.8, 9.9},
            {10.1, 11.11, 12.12, 13.13, 14.14},
            {15.15, 16.16, 17.17, 18.18, 19.19}
        },
        {
            {20.2, 21.21, 22.22, 23.23, 24.24},
            {25.25, 26.26, 27.27, 28.28, 29.29},
            {30.3, 31.31, 32.32, 33.33, 34.34},
            {35.35, 36.36, 37.37, 38.38, 39.39}
        },
        {
            {40.4, 41.41, 42.42, 43.43, 44.44},
            {45.45, 46.46, 47.47, 48.48, 49.49},
            {50.5, 51.51, 52.52, 53.53, 54.54},
            {55.55, 56.56, 57.57, 58.58, 59.59}
        }
    };
    matrix[1][2][3] = 100.101;

    std::cout << "Matrix elements: " << std::endl;
    for (int i = 0; i < sizeof(matrix) / sizeof(matrix[0]); ++i) {
        for (int j = 0; j < sizeof(matrix[0]) / sizeof(matrix[0][0]); ++j) {
            for (int k = 0; k < sizeof(matrix[0][0]) / sizeof(matrix[0][0][0]); ++k) {
                std::cout << matrix[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    std::cout << "Size of matrix: " << sizeof((matrix[0], matrix[0][0], matrix[0][0][0])) << " bytes" << std::endl;

    double inputNum;
    std::cout << "Enter the number to find the square root: ";
    std::cin >> inputNum;
    std::isfinite(inputNum) ? std::cout << "Input is a finite number." << std::endl : std::cout << "Input is not a finite number." << std::endl;
    std::isnan(inputNum) ? std::cout << "Input is NaN." << std::endl : std::cout << "Input is not NaN." << std::endl;
    std::isinf(inputNum) ? std::cout << "Input is infinite." << std::endl : std::cout << "Input is not infinite." << std::endl;
    assert(inputNum >= 0); // Ensure the input is non-negative
    std::cout << "Square root of " << inputNum << " is " << sqrt(inputNum) << std::endl; // Safe to call sqrt after assertion


    double vector1[10] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    double vector2[10] = {1.0, 2.0, 1.0, 2.0, 1.0, 2.0, 1.0, 2.0, 1.0, 2.0};
    double dotProduct = 0.0;
    double scalarVector = 0.0;
    for (int i = 0; i < 10; ++i) {
        dotProduct += vector1[i] * vector2[i];
        scalarVector += vector1[i] * 2.0; // Scalar multiplication by 2.0
    }

    std::cout << "Dot product of vector1 and vector2 is: " << dotProduct << std::endl;
    std::cout << "Scalar multiplication of vector1 by 2.0 is: " << scalarVector << std::endl;

    return 0;
}