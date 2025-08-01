#include <iostream>
#include <iomanip>
#include <limits>
#include <stdexcept>
#include <cmath>

// Calculate kinetic energy (1/2 mv^2) in joules
double calculate_kinetic_energy(double mass, double velocity) {
    if (mass < 0 || velocity < 0) {
        throw std::invalid_argument("Mass and velocity must be non-negative.");
    }
    return 0.5 * mass * velocity * velocity; // Simplified, no need for std::pow
}

// Calculate 3D vector magnitude (sqrt(x^2 + y^2 + z^2))
double compute_vector_magnitude(double x, double y, double z) {
    return std::sqrt(x * x + y * y + z * z); // Simplified, no need for std::pow
}

// Calculate power (work/time) in watts
double calculate_power(double work, double time) {
    if (time <= 0) {
        throw std::invalid_argument("Time must be greater than zero.");
    }
    return work / time;
}

int main() {
    std::cout << std::fixed << std::setprecision(2); // Consistent output formatting

    while (true) {
        std::cout << "Scientific Calculator Menu:" << std::endl;
        std::cout << "1. Kinetic Energy (1/2 mv^2)" << std::endl;
        std::cout << "2. Vector Magnitude (sqrt(x^2 + y^2 + z^2))" << std::endl;
        std::cout << "3. Power (work/time)" << std::endl;
        std::cout << "Please select an option (1-3, or 0 to exit): ";

        int choice;
        std::cin >> choice;

        if (std::cin.fail() || choice < 0 || choice > 3) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Invalid choice. Please enter a number between 0 and 3." << std::endl;
            continue;
        }

        if (choice == 0) {
            std::cout << "Exiting calculator." << std::endl;
            break;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        try {
            if (choice == 1) {
                double mass, velocity;
                std::cout << "Enter mass (kg): ";
                std::cin >> mass;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cerr << "Invalid mass input." << std::endl;
                    continue;
                }
                std::cout << "Enter velocity (m/s): ";
                std::cin >> velocity;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cerr << "Invalid velocity input." << std::endl;
                    continue;
                }
                double kinetic_energy = calculate_kinetic_energy(mass, velocity);
                std::cout << "Kinetic Energy: " << kinetic_energy << " J" << std::endl;
            } else if (choice == 2) {
                double x, y, z;
                std::cout << "Enter vector components (x, y, z): ";
                std::cin >> x >> y >> z;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cerr << "Invalid vector components." << std::endl;
                    continue;
                }
                double magnitude = compute_vector_magnitude(x, y, z);
                std::cout << "Vector Magnitude: " << magnitude << std::endl;
            } else if (choice == 3) {
                double work, time;
                std::cout << "Enter work done (J): ";
                std::cin >> work;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cerr << "Invalid work input." << std::endl;
                    continue;
                }
                std::cout << "Enter time taken (s): ";
                std::cin >> time;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cerr << "Invalid time input." << std::endl;
                    continue;
                }
                double power = calculate_power(work, time);
                std::cout << "Power: " << power << " W" << std::endl;
            }
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            continue;
        }
    }

    return 0;
}