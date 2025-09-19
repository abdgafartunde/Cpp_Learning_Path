#include <iostream>

int val = 20;

int main(){
    float num1, num2; 

    std:: cout << "Enter the two numbers: \n";
    std:: cin >> num1 >> num2;
    std:: cout << "The number are: " << num1 << " and " << num2 << "\n";
    std:: cout << "Global variable: " << ::val << std::endl;

    int i; 
    int& ri = i; 
    i = 5; 
    std::cout << i << " " << ri << std:: endl;
    ri = 10;
    std::cout << i << " " << ri + 1 << "\n";

    const int* ptr = &i; 

    std::cout << ptr << " " << ++i;

    return 0;
}