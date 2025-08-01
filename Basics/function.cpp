#include <iostream>

void happyBirthday(const std::string name);
void singBirthdaySong(const std::string name);
void celebrateBirthday(const std::string name);
double areaOfCircle(double radius);
void celebrateBirthday();

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    celebrateBirthday(name);
    std::cout << "We hope you have a fantastic day!" << std::endl;
    celebrateBirthday();

    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    double area = areaOfCircle(radius);
    std::cout << "The area of the circle with radius " << radius << " is " << area << std::endl;

    std::cout << "Thank you for using the birthday and area calculator!" << std::endl;
    std::cout << "Goodbye!" << std::endl;


    return 0;
}

void happyBirthday(const std::string name) {
    std::cout << "Happy Birthday " << name << "!" << std::endl;
}
void singBirthdaySong(const std::string name) {
    std::cout << "Happy birthday to you," << std::endl;
    std::cout << "Happy birthday to you," << std::endl;
    std::cout << "Happy birthday dear " << name << "," << std::endl;
    std::cout << "Happy birthday to you!" << std::endl;
}

void celebrateBirthday(const std::string name) {
    happyBirthday(name);
    singBirthdaySong(name);
}

double areaOfCircle(double radius) {
    const double pi = 3.14159265358979323846;
    double area = pi * radius * radius;
    return area;
}

void celebrateBirthday() {
    std::cout << "Happy Birthday!" << std::endl;
    std::cout << "Wishing you a wonderful year ahead!" << std::endl;
}

