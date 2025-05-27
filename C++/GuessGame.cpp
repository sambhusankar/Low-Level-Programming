#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

int main() {
    srand(time(0));  // Seed the random number generator
    int number = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "Guess the number (1 to 100):\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > number)
            std::cout << "Too high!\n";
        else if (guess < number)
            std::cout << "Too low!\n";
        else
            std::cout << "Correct! You guessed it in " << attempts << " attempts.\n";

    } while (guess != number);

    return 0;
}
