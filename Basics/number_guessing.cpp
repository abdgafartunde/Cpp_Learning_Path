#include <iostream>
#include <ctime>

int main() {
    
    srand(time(NULL)); // Seed the random number generator
    
    int guess; 
    int number = rand() % 100 + 1; // Generate a random number between 1 and 100
    int attempts = 0;
    bool correct = false;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    std::cout << "Try to guess it!" << std::endl;

    while (!correct) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < 1 || guess > 100) {
            std::cout << "Please guess a number between 1 and 100." << std::endl;
            continue;
        }

        if (guess < number) {
            std::cout << "Too low! Try again." << std::endl;
        } 
        else if (guess > number) {
            std::cout << "Too high! Try again." << std::endl;
        } 
        else {
            correct = true;
            std::cout << "Congratulations! You've guessed the number " << number 
                      << " in " << attempts << " attempts!" << std::endl;
        }
    }

    return 0;
}