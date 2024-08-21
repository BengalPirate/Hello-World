#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int targetNumber = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100. Can you guess what it is?" << std::endl;

    // Game loop
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > targetNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < targetNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != targetNumber);

    return 0;
}
