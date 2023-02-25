// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

// void means that the function won't be returning anything
void sayHi(string name, int age){

    cout << "Hello " << name << " you are " << age << endl;

}

int main()
{

   sayHi("Mo", 60);
   sayHi("Tom", 45);
   sayHi("Steve", 19);

   return 0;

}