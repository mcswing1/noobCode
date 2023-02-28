// Reference URL: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=1035s
#include <iostream>
using namespace std;

// Getters and setters allow us to control access to the different attributes and elements inside of the C++ classes.
// Allows us to enforce control over the types of attributes and elements that can be chosen in the program.
class Movie {
    // Any variables, functions, attributes under "private", only code inside of the Movie class can access these elements.
    private:
        string rating; 
    // When anything is public, any code/program outside of the class can access it.
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            // In order to get aRating, we have to go through the setRating function below.
            setRating(aRating);
        }

        // Enforcement of the rating is done through this function.
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "R" || aRating == "NR" || aRating == "PG-13"){
                rating = aRating; 
            } else {
                // If an invalid rating is set, the value will be set to "NR" since no rating was entered.
                rating = "NR";
            }
        }

        // I do not fully understand the purpose of this function. Maybe because this is in the Movie class, it can access the rating variable. Then the getRating function can be accessed from the main function.
        string getRating(){
            return rating;
        }
};

int main()
{
    
    Movie avengers("The Avengers", "Joss Whedon", "PG-15");

    //avengers.setRating("Dog");

    cout << avengers.getRating() << endl;

    return 0;
}