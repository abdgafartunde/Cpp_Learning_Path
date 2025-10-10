#include <iostream> 

void swap_pointers(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double x = 5.5;
    double y = 10.5;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap_pointers(&x, &y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
} 