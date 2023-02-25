// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

int main()
{
    
    // Array creation
    int nums[] = {1, 2, 5, 7, 3};


    // A "For" loop is a special type of loop in C++ that compacts the above code into a specially-formatted loop. 
    // For loop has three conditions: variable declaration/initialization, looping condition, and variable increment.
    
    // This For loop will iterate through the declared array above. 
    for(int i = 0; i < 5; i++){ 

        cout << nums[i] << endl;

    }

    return 0;
}