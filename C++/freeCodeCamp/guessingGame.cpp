// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

int main()
{
    
    // The secret number
    int secretNum = 7;

    // Guess variable
    int guess;

    // Current number of guess attempts
    int guessCount = 0;

    // Total number of guesses allowed
    int guessLimit = 3; 

    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){

        if(guessCount < guessLimit) {

        cout << "Enter a guess: ";
        cin >> guess; 
        guessCount++;
        
        } else {
            outOfGuesses = true; 
        }
    }

    
    if(outOfGuesses) {
        
        cout << "You Lose!" << endl; 
    } else { 
        cout << "You win!" << endl; 
    }

    return 0;
}