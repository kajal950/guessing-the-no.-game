#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // seed for random number generation
    char playAgain = 'y';

    do {
        int numberToGuess = rand() % 100 + 1; // generate random number between 1 and 100
        int attempts = 0;

        cout << "Guessing The Number Game\n";
        cout << "I'm thinking of a number between 1 and 100.\n";
        cout << "Try to guess it in as few attempts as possible.\n";

        while (true) {
            cout << "Enter your guess: ";
            int guess;
            cin >> guess;

            attempts++;

            if (guess < numberToGuess) {
                cout << "Too low! Try again.\n";
            } else if (guess > numberToGuess) {
                cout << "Too high! Try again.\n";
            } else {
                cout << "Congratulations! You found the number in " << attempts << " attempts.\n";
                break;
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}