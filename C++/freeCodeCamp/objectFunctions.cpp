// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

// Object functions (aka instance functions) are functions that can be placed inside a class. The different objects of the class can use that function.
class Student {
    public: 
        string name;
        string major;
        double gpa;
        // Creating the constructor below
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        // Function in the Student class to tell if the student object evaluates to being on honor roll (needs a GPA of 3.5 or greater)
        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }
            return false; 
        }
};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student2.hasHonors();

    return 0;
}