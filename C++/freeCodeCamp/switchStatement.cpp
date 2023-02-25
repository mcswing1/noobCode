// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

string getDatofWeek(int dayNum){
    string dayName;

    // Using this function will be inefficient because we will need to build an "if/else" statement for each day of the week.
    /* if(dayNum == 0){
        dayName == "Sunday";
    } else if(dayNum == 1){
        dayName == "Monday";
    } */

    switch(dayNum){
        case 0: 
            dayName = "Sunday"; 
            break;
        case 1: 
            dayName = "Monday"; 
            break;
        case 2: 
            dayName = "Tuesday"; 
            break;
        case 3: 
            dayName = "Wednesday"; 
            break;
        case 4: 
            dayName = "Thursday"; 
            break;
        case 5: 
            dayName = "Friday"; 
            break;
        case 6: 
            dayName = "Saturday"; 
            break;
        // If not of the cases are matched, the default block is executed
        default:
            dayName = "Invalid Day Number";
    }

    return dayName;
}

int main()
{
    
    cout << getDatofWeek(10) << endl; 

    return 0;
}