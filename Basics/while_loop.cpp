#include <iostream>

int main() {
    std::string name;

    while(name.empty()) {
        std::cout << "Please enter your name: ";
        std::getline(std::cin, name);
        
        if(name.empty()) {
            std::cout << "Name cannot be empty. Try again." << std::endl;
        }
    }
    return 0;
}