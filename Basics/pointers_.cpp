#include <iostream>

void basicPointerExample() {

    /*
    This function demonstrates the basics of pointers in C++.
    It covers: 
    - pointer declaration, 
    - initialization, 
    - dereferencing, and 
    - the concept of nullptr.

    Pointers are variables that store memory addresses of other variables.
    They are powerful tools for dynamic memory management,
    efficient array handling, and for implementing data structures like linked lists.

    Note: Dereferencing a nullptr leads to undefined behavior (usually a crash).

    */

    std::cout << "--- Step 1: Pointers - The Foundation ---" << std::endl;

    int score = 100; // A regular integer variable
    std::cout << "Original score: " << score << std::endl;
    std::cout << "Memory address of score: " << &score << std::endl;

    // Declare a pointer to an integer and make it point to 'score'
    int* score_ptr = &score;
    std::cout << "Value stored in score_ptr (address of score): " << score_ptr << std::endl;

    // Dereference score_ptr to access the value it points to
    std::cout << "Value pointed to by score_ptr (*score_ptr): " << *score_ptr << std::endl;

    // Modify the value using the pointer
    *score_ptr = 95;
    std::cout << "Score after modifying via pointer: " << score << std::endl;
    std::cout << "Value pointed to by score_ptr now: " << *score_ptr << std::endl;


    // A pointer initialized to nullptr
    int* null_ptr = nullptr;
    if (null_ptr == nullptr) {
        std::cout << "null_ptr is indeed nullptr." << std::endl;
    }

    // Attempting to dereference a nullptr would cause a crash (segmentation fault)
    // std::cout << *null_ptr << std::endl; // DANGER! DO NOT UNCOMMENT!

    std::cout << std::endl;


}

int main() {

    basicPointerExample();

    std::cout << "Size of int and double pointers:" << std::endl;
    std::cout << "Size of int pointer: " << sizeof(int*) << " bytes" << std::endl;
    std::cout << "Size of double pointer: " << sizeof(double*) << " bytes" << std::endl;

    return 0;
}