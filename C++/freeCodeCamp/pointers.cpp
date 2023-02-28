// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

int main()
{
    
    // Pointers are basically memory addresses
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

    // The & tells C++ that we want to print out the physical memory address of the variable.
    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    return 0;
}