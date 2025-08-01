#include <iostream>
#include <iomanip>
#include <limits>

// Convert Celsius to Fahrenheit
double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Convert Fahrenheit to Celsius
double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Convert Celsius to Kelvin
double celsius_to_kelvin(double celsius) {
    return celsius + 273.15;
}

// Convert Kelvin to Celsius
double kelvin_to_celsius(double kelvin) {
    return kelvin - 273.15;
}

// Convert Fahrenheit to Kelvin
double fahrenheit_to_kelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

// Convert Kelvin to Fahrenheit
double kelvin_to_fahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Temperature Converter" << std::endl;
    std::cout << "Choose conversion type:" << std::endl;
    std::cout << "1. Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit to Celsius" << std::endl;
    std::cout << "3. Celsius to Kelvin" << std::endl;
    std::cout << "4. Kelvin to Celsius" << std::endl;
    std::cout << "5. Fahrenheit to Kelvin" << std::endl;
    std::cout << "6. Kelvin to Fahrenheit" << std::endl;

    int choice;
    double temperature;

    while (true) {
        std::cout << "Enter choice (1-6): ";
        std::cin >> choice;
        if (std::cin.fail() || choice < 1 || choice > 6) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Try again." << std::endl;
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Enter temperature: ";
        std::cin >> temperature;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid temperature. Try again." << std::endl;
            continue;
        }

        if ((choice == 3 || choice == 5) && celsius_to_kelvin(fahrenheit_to_celsius(temperature)) < 0) {
            std::cout << "Error: Temperature below absolute zero." << std::endl;
            continue;
        }
        if (choice == 4 || choice == 6) {
            if (temperature < 0) {
                std::cout << "Error: Temperature below absolute zero." << std::endl;
                continue;
            }
        }

        switch (choice) {
            case 1:
                std::cout << temperature << "C = " << celsius_to_fahrenheit(temperature) << "F" << std::endl;
                break;
            case 2:
                std::cout << temperature << "F = " << fahrenheit_to_celsius(temperature) << "C" << std::endl;
                break;
            case 3:
                std::cout << temperature << "C = " << celsius_to_kelvin(temperature) << "K" << std::endl;
                break;
            case 4:
                std::cout << temperature << "K = " << kelvin_to_celsius(temperature) << "C" << std::endl;
                break;
            case 5:
                std::cout << temperature << "F = " << fahrenheit_to_kelvin(temperature) << "K" << std::endl;
                break;
            case 6:
                std::cout << temperature << "K = " << kelvin_to_fahrenheit(temperature) << "F" << std::endl;
                break;
        }
        break;
    }

    return 0;
}