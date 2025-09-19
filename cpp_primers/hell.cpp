#include <iostream>

int main() {
    // This is an hello world!
    /* 
    This is a multi-line comments 
    */
    std:: cout << "Hello World! \n";

    // This comute the sum of some integers from index to N
    float sum = 0;
    int index = 1000;
    int N = 100000000;
    while (index <= N)
    {
        sum += index;
        ++index;
    }
    std::cout << "The sum of the sequence is: " << sum << "\n";

    int ind = 100;
    while (ind > 0){
        std:: cout << ind << "\n";
        --ind;
    }

    std::cout << "Enter the ranges of the values to print \n";
    int init, end;
    std::cin >> init >> end;
    while (init <= end){
        std::cout << init << "\n";
        ++init;
    }

    int Num = 100;
    for (int val = 0; val <= Num; ++val){
        std::cout << val << "\n";
    }
    

    int curVal = 0, val = 0;
    if (std::cin >> curVal){
        int count = 1;
        while (std::cin >> val)
        {
            if (val == curVal){
                ++count;
            }
            else {
                std::cout << curVal << " appears " << count << " times \n";
                curVal = val;
                count = 1;
            }
        }
        std::cout << curVal << " appears " << count << " times \n";
    }

    float SUM, num = 0;
    // ish...
    std::cout << "Enter the numbers \n";
    while (std::cin >> num)
    {
        SUM += num;
    }
    std::cout << "The sum of the unknown number of inputs is: " << SUM << "\n";
    
    return 0;
}