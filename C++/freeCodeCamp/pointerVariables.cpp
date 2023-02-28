// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

int main()
{
    
    // Pointers are basically memory addresses
    int age = 19;
    // Pointer variables are created with a "*p" and then & in front of the variable
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    // The & tells C++ that we want to print out the physical memory address of the variable.
    cout << pAge << endl;
    // If we add an * before the variable, it is called "De-referencing a pointer." Instead of showing the physical memory address, dereferencing a pointer grabs the value out of that memory address. I'm sure someday I will understand what this is used for.
    cout << *pGpa << endl;
    cout << pName << endl;

    return 0;
}