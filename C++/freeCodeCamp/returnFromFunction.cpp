// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

// We want to return something from this function so we don't use "void", we use a value. 
double cubed(double num){

    double result = num * num * num; 
    // Return the result to the main function. The Return keyword breaks out of this function and returns back to the main function. 
    return result; 

}

int main()
{

    // The value that gets returned from the cubed function gets stored in the answer variable
    double answer = cubed(5.0); 
    cout << answer << endl;

    return 0;

}

