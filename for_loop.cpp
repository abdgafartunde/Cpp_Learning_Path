#include <iostream>

int main() {
    for (int i = 1000; i > 50; i -= 5) {
        
        if (i == 200){
            break;
        }

        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        
        std::cout << "Value of i: " << i << std::endl;
    }
    std::cout << "Loop finished." << std::endl;
    return 0;
}