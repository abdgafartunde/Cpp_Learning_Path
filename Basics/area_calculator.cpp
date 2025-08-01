// Exercise 1

#include <iostream>
#include <cmath>

double calculate_circle_area(double radius) {
    const double pi = 3.14159265358979323846;
    return pi * radius * radius;
}

double calculate_rectangle_area(double length, double width) {
    return length * width;
} 

double calculate_triangle_area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    std::cout << "What shape's area would you like to calculate? (circle (C) / rectangle (R) / triangle (T)): ";
    char shape;
    std::cin >> shape;

    if (shape == 'C' || shape == 'c') {
        double radius;
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
        if (std::cin.fail() || radius < 0) {
            std::cout << "Invalid input for radius." << std::endl;
            return 1;
        }
        std::cout << "Area of the circle: " << calculate_circle_area(radius) << std::endl;
    } else if (shape == 'R' || shape == 'r') {
        double length, width;
        std::cout << "Enter the length of the rectangle: ";
        std::cin >> length;
        if (std::cin.fail() || length < 0) {
            std::cout << "Invalid input for rectangle length." << std::endl;
            return 1;
        }
        std::cout << "Enter the width of the rectangle: ";
        std::cin >> width;
        if (std::cin.fail() || length < 0 || width < 0) {
            std::cout << "Invalid input for rectangle dimensions." << std::endl;
            return 1;
        }
        std::cout << "Area of the rectangle: " << calculate_rectangle_area(length, width) << std::endl;
    } else if (shape == 'T' || shape == 't') {
        double base, height;
        std::cout << "Enter the base of the triangle: ";
        std::cin >> base;
        if (std::cin.fail() || base < 0) {
            std::cout << "Invalid input for triangle base." << std::endl;
            return 1;
        }
        std::cout << "Enter the height of the triangle: ";
        std::cin >> height;
        if (std::cin.fail() || height < 0) {
            std::cout << "Invalid input for triangle height." << std::endl;
            return 1;
        }
        std::cout << "Area of the triangle: " << calculate_triangle_area(base, height) << std::endl;
    } else {
        std::cout << "Invalid shape selected." << std::endl;
    }
}