// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

int main()
{
    // Variables are containers. They allow us to maintain and keep track of the data and values in our programs a lot better. We can also assign values only once.
    // First way of creating a variable. 
    string characterName = "Tom";
    // Second way of creating a variable
    int characterAge;
    characterAge = 50;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;

    characterName = "Mike";

    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;
    return 0;
}