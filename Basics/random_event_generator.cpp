#include <iostream>
#include <ctime>

int main() {
    
    srand(time(NULL)); // Seed the random number generator
    int randomNumber = (rand() % 5) + 1; // Generate a random number between 1 and 5
    std::cout << "Random number: " << randomNumber << std::endl;

    switch(randomNumber) {
        case 1:
            std::cout << "You win a car!" << std::endl;
            break;
        case 2:
            std::cout << "You win a bike!" << std::endl;
            break;
        case 3:
            std::cout << "You win a trip to the mountains!" << std::endl;
            break;
        case 4:
            std::cout << "You win a new house!" << std::endl;
            break;
        case 5:
            std::cout << "You win a vacation package!" << std::endl;
            break;
        default:
            std::cout << "Unexpected event!" << std::endl;
    }

    return 0;
}