// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

// A class is a specification (aka blueprint, template) for a new data type (aka complex data type) in our programs.
// When naming classes, we usually use capital letters.
class Book {
    public: 
        string title;
        string author;
        int pages;
};

int main()
{
    // An object is an instance of the class.
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    // 2nd book object from the class
    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkien";
    book2.pages = 700;

    cout << book1.title << endl;
    cout << book1.pages << " pages" << endl;
    cout << book2.author << endl;
    cout << book2.pages << " pages" << endl;

    return 0;
}