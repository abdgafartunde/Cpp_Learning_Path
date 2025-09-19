#include <iostream>

int main(){
    int a;
    std::cout<< "Welcome \n";
    std::cout<< "Enter a number: ";
    std::cin >> a;
    std::cout<< "You entered: " << a;

    int b {23};
    std::cout<< "\nThe value of b is: " << b << std::endl;

    int c(45);
    std::cout<< "The value of c is: " << c << std::endl;

    std::cout<< "size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout<< "size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout<< "size of bool: " << sizeof(bool) << " bytes" << std::endl;
    std::cout<< "size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout<< "size of double: " << sizeof(double) << " bytes" << std::endl;
    
    
    return 0;
}
