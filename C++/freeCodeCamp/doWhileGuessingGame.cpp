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

    do {

        cout << "Enter a guess: ";
        cin >> guess; 
        guessCount++;
        
        // Reference URL for this section of code: https://careerkarma.com/blog/c-plus-plus-do-while-loop/
        if(guessCount == guessLimit){

            outOfGuesses = true;
            break;  
        }

    } while (secretNum != guess && !outOfGuesses);

    
    if(outOfGuesses == true) {
        
        cout << "You Lose!" << endl; 
    } else { 
        cout << "You win!" << endl; 
    }

    return 0;
}