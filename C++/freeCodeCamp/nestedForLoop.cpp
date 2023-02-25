// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

int main()
{
    
    // Two dimensional array - every element inside the array is another array
    int numberGrid[3][2] = {
            {1, 2},
            {3, 4},
            {5, 6}
    };

    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 2;j++){
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}