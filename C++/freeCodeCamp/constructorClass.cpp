// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

// A constructor is a special function that gets called whenever we create an object of a class.
class Book {
    public: 
        string title;
        string author;
        int pages;
        // Creating the constructor below
        // The function can take arguments
        Book(string name){
            cout << name << endl;
        }
};

int main()
{
    // An object is an instance of the class.
    // The objects can now provide values for that argument, which gets passed into the constructor
    Book book1("Harry Potter");
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    // 2nd book object, with argument, from the class
    Book book2("Lord of the Rings");
    book2.title = "Lord of the Rings";
    book2.author = "Tolkien";
    book2.pages = 700;

    /*
    cout << book1.title << endl;
    cout << book1.pages << " pages" << endl;
    cout << book2.author << endl;
    cout << book2.pages << " pages" << endl;
    */

    return 0;
}