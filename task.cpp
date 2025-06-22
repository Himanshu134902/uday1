#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  
    int number = rand() % 100 + 1; 
    int guess;

    cout << "Guess the number (1 to 100): ";
    cin >> guess;

    while (guess != number) {
        if (guess > number) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Too low! Try again: ";
        }
        cin >> guess;
    }

    cout << "Congratulations! You guessed the number.\n";
    return 0;
}
