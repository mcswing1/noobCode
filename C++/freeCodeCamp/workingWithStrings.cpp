// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

int main()
{
    
    string phrase = "Giraffe Academy";
    string phrasesub;
    // (index, length)
    phrasesub = phrase.substr(8, 3);

    // Find out whether a specific string or character is in the variable, given a parameter at a particular index number. Gives back a number.
    cout << phrase.find("ffe", 0) << endl; 
    cout << phrasesub << endl; 
}