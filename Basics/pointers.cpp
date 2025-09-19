#include <iostream>

int main(){

    int value = 42;    
    
    std::cout << "Pointer Basics in C++" << std::endl;

    std::cout << "Declaring a pointer:" << std::endl;
    int* ptr;

    std::cout << "Assigning a value to the pointer:" << std::endl;
    ptr = &value;
    std::cout << "Pointer assigned: " << *ptr << std::endl;
    std::cout << "Pointer address: " << ptr << std::endl;

    return 0;
}