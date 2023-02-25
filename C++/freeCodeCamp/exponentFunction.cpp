// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

// This function can only handle positive-number powNums
int power(int baseNum, int powNum){
    int result = 1;

    for(int i = 0; i < powNum; i++){
        result = result * baseNum; 
    }

    return result; 
}

int main()
{
    cout << power(4, 7) << endl; 
    
    return 0;
}