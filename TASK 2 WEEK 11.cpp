#include <iostream>
#include <cstdlib>  // for rand()
#include <ctime>    // for time()
using namespace std;

int main() {
    int secretNumber, guess;

    srand(time(0));                 // Seed random number generator
    secretNumber = rand() % 20 + 1; // Generates number between 1 and 20

    do {
        cout << "Guess a number (1-20): ";
        cin >> guess;

        if (guess > secretNumber)
            cout << "Too high! Try again.\n";
        else if (guess < secretNumber)
            cout << "Too low! Try again.\n";
        else
            cout << "Congratulations! You guessed it!\n";

    } while (guess != secretNumber);
    system ("pause");
    return 0;
}
