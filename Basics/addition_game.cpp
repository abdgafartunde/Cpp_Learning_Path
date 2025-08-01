#include <iostream>
#include <ctime>
#include <cstdlib>

bool playAdditionRound();

int main() {
    srand(time(0)); // Seed the random number generator

    std::cout << "Welcome to the Addition Game!" << std::endl;
    std::cout << "How many correct rounds do you need to win? ";
    
    int roundsToWin;
    std::cin >> roundsToWin;
    if (std::cin.fail() || roundsToWin < 1) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1; // Exit if input is invalid
    }

    std::cin.ignore(); // Clear the newline character from the input buffer
    
    std::cout << "You need to win " << roundsToWin << " rounds to complete the game." << std::endl;
    
    int wins = 0;
    int roundsPlayed = 0;
    std::cout << "Let's start playing!" << std::endl;
    while (wins < roundsToWin) {
        std::cout << "Round " << (roundsPlayed + 1) << ":" << std::endl;
        if (playAdditionRound()) {
            ++wins;
        }
        ++roundsPlayed;
    }
    std::cout << "You won " << wins << " out of " << roundsPlayed << " rounds." << std::endl;
    std::cout << "Congratulations! You've completed the game!" << std::endl;

    return 0;
}

bool playAdditionRound() {
    const int MAX_NUM = 50; 
    int num1 = (rand() % MAX_NUM) + 1; // Random number between 1 and 100
    int num2 = (rand() % MAX_NUM) + 1; // Random number between 1 and 100
    int correctAnswer = num1 + num2;

    std::cout << "What is " << num1 << " + " << num2 << "? ";
    int userAnswer;
    std::cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        std::cout << "Correct! Well done!" << std::endl;
    } else {
        std::cout << "Incorrect. The correct answer is " << correctAnswer << "." << std::endl;
    }

    return userAnswer == correctAnswer;
}