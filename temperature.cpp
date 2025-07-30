#include <iostream>

int main() {
    double temperature;
    char unit;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temperature;

    if (temperature < 0) {
        std::cout << "It's freezing!" << std::endl;
    } 
    else if (temperature >= 0 && temperature <= 20) {
        std::cout << "It's cold." << std::endl;
    } 
    else if (temperature > 20 && temperature <= 30) {
        std::cout << "It's warm." << std::endl;
    } 
    else {
        std::cout << "It's hot!" << std::endl;
    }


    std::cout << "Do you want to convert it to Fahrenheit (F) or Kelvin (K)? ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        double fahrenheit = (temperature * 9.0 / 5.0) + 32;
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << std::endl;
    } 
    else if (unit == 'K' || unit == 'k') {
        double kelvin = temperature + 273.15;
        std::cout << "Temperature in Kelvin: " << kelvin << " K" << std::endl;
    } 
    else {
        std::cout << "Invalid unit entered." << std::endl;
    }

    return 0;
}