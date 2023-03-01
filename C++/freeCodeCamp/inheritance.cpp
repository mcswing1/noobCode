// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

// Inheritance allows us to create a class and then extend that class to other classes
// Terminology: This Chef class is called a superclass.
class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes yummy chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

// Because the ItalianChef class will be able to do everything the Chef class can do, we want this class to inherit from the Chef class
// Terminology: This ItalianChef class is called a subclass
class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        // The function overrides the function from the other class. 
        void makeSpecialDish(){
            cout << "The chef makes chicken parmesan" << endl;
        }
};

int main()
{
    
    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish(); 

    return 0;
}