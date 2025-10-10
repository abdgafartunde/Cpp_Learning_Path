#include <iostream>


int main() {

    /*
    This program demonstrates dynamic memory management in C++.
    It covers:
    - Allocating memory on the heap using 'new'
    - Deallocating memory using 'delete' and 'delete[]'
    - Avoiding memory leaks and dangling pointers
    
    
    */

    // Demonstrating dynamic memory allocation and deallocation in C++
    std::cout << "--- Dynamic Memory Management in C++ ---" << std::endl;

    // Step 1: Allocate memory for an integer on the heap
    int* num_ptr {new int}; // 'new' allocates memory and returns a pointer to it
    *num_ptr = 42; // Assign a value to the allocated memory
    std::cout << "Value of dynamically allocated int: " << *num_ptr << std::endl;

    // Step 2: Deallocate the memory to prevent memory leaks
    delete num_ptr; // 'delete' frees the memory allocated with 'new'
    num_ptr = nullptr; // Set pointer to nullptr after deletion to avoid dangling pointer


    // Step 3: Allocate memory for an array of doubles
    size_t array_size = 50;
    double* arr_ptr {new double[array_size]}; // Allocate array of doubles
    for (size_t i = 0; i < array_size; ++i) {
        arr_ptr[i] = static_cast<double>(i) * 1.1; // Initialize array elements
    }

    std::cout << "Dynamically allocated array of doubles: ";
    for (size_t i = 0; i < array_size; ++i) {
        std::cout << arr_ptr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Size of the array: " << sizeof(arr_ptr[0]) << std::endl;
    std::cout << "Total memory allocated for array: " << sizeof(arr_ptr[0]) * array_size << " bytes" << std::endl;
    std::cout << "Length of the array: " << sizeof(arr_ptr) / sizeof(arr_ptr[0]) << std::endl;

    // Step 4: Deallocate the array memory
    delete[] arr_ptr; // Use 'delete[]' for arrays
    arr_ptr = nullptr; // Avoid dangling pointer


    // Note: Always ensure every 'new' has a corresponding 'delete' to manage memory properly.

    return 0;
}