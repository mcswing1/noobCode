// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

int main()
{
    
    
    string name;

    cout << "Enter your name: ";
    getline(cin, name); 

    cout << "Hello " << name << endl;

    int age; 

    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old" << endl;
    

    return 0;
}