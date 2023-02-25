// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

// Function stub
void sayHi(string name, int age); 

int main()
{

   sayHi("Mo", 65);
   sayHi("Tony", 67);
   sayHi("Carlos", 89);

   return 0;

}

// Normally, having the function down here would not work. The function needs to be defined before being called. But the issue can be resolved with a function stub.
void sayHi(string name, int age){

    cout << "Hello " << name << " you are " << age << endl;

}