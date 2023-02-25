// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

int main()
{
    
    bool isMale = false;
    bool isTall = false;
    
    if(isMale && isTall){
        cout << "You are a tall male" << endl;
    // ! Negates whatever follows it
    } else if(isMale && !isTall) {
        cout << "You are a short male" << endl; 
    } else if(!isMale && isTall) {
        cout << "You are tall but not a male" << endl; 
    } else {
        cout << "You are not a male and not tall" << endl;
    }
    
    return 0;
}