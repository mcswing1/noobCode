// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
// We want to import some math functions
#include <cmath>

using namespace std;

int main()
{
    
    // 2 raised to the power of 5.
    cout << pow(2, 5) << endl;
    // Square root
    cout << sqrt(36) << endl; 
    // Returns the rounded number 
    cout << round(4.3) << endl;
    // Automatically rounds the number up
    cout << ceil(4.1) << endl;
    // Automatically rounds the number down
    cout << floor(5.9) << endl;
    // Tells us which number is bigger
    cout << fmax(3, 10) << endl;

    return 0;  

}