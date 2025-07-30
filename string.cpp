#include <iostream>

int main() {
    std::string name, username, email_id; 
    char initial;
    

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "You didn't enter a name." << std::endl;
    } 
    else if (name.length() < 3) {
        std::cout << "Your name is too short." << std::endl;
    } 
    else if (name.length() > 20) {
        std::cout << "Your name is too long." << std::endl;
    }
    else {
        std::cout << "Hello, " << name << "!" << std::endl;
        std::cout << "Welcome to the C++ programming world, " << name << "!" << std::endl;
    }

    initial = name.at(0);
    std::cout << "Your first initial is: " << initial << std::endl;

    int space_pos = name.find(' ');
    if (space_pos != std::string::npos) {
        username = name.substr(0, space_pos);
    } else {
        username = name;
    }
    std::cout << "Your username is: " << username << std::endl;

    email_id = username.append("@gmail.com");
    std::cout << "Your email address is: " << email_id << std::endl;

    return 0;
}