#include <iostream> 
#include <ctime> // For seeding the random number generator

int main() {
    
    srand(time(NULL)); // Seed the random number generator
    int randomNumber = (rand() % 100) + 1; // Generate a random number between 1 and 100
    std::cout << "Random number: " << randomNumber << std::endl;
}