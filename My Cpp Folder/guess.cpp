#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess = 0;

    cout << "Guess a number between 1 and 100\n";
    while (guess != number) {
        cout << "Enter guess: ";
        cin >> guess;
        if (guess > number) cout << "Too high!\n";
        else if (guess < number) cout << "Too low!\n";
        else cout << "You guessed it right!\n";
    }
    return 0;
}