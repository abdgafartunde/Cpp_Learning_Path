#include <iostream>
#include <cmath>

int main(){
    int n; 

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    double sum = 0.0;
    for (int i = 1; i <= n; i++){
        sum += i*i;  // Squaring each number
    }
    std::cout << "The sum of the squares of the first " << n << " natural numbers is: " << sum << std::endl;

    double compute; 
    compute = n*(n + 1) * (2 * n + 1) / 6; // Using the formula for the sum of squares
    std::cout << "The computed sum using the formula is: " << compute << std::endl;

    if (std::abs(sum - compute) < 1e-9) {
        std::cout << "The computed sum matches the calculated sum." << std::endl;
    } else {
        std::cout << "There is a discrepancy between the computed and calculated sums." << std::endl;
    }

    return 0;
}