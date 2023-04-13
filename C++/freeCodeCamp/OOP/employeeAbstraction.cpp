// Reference URL: https://www.youtube.com/watch?v=wN0x9eZLix4&t=388 - 39:51
// Abstraction hides complex things behind a procedure that makes those things look simple. - 40:00
// In C++ you can simulate the concept of an interface by using abstract classes. - 44:34

#include <iostream>
using std::string;

class AbstractEmployee {
    // We add the virtual keyword to make this method obligatory. This creates a pure virtual function that forces the implmentation of the method AskForPromotion. - 45:45
    virtual void AskForPromotion() = 0; 
}; 

// The Employee class has signed the AbstractEmployee class (I don't know what "signed" means in this context)
class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) {
        Name = name; 
    }

    string getName() {
        return Name; 
    }

    void setCompany(string company) {
        Company = company; 
    }

    string getCompany() {
        return Company; 
    }

    void setAge(int age) {
        if(age >= 18)
        Age = age; 
    }

    int getAge() {
        return Age; 
    }

    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age; 

    }

    // The Employee class implements the method of the AbstractEmployee class.
    virtual void AskForPromotion() {
        if(Age>30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << " , sorry No promotion for you!" << std::endl;
    }

};

int main()
{
    Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25); 
    // employee1.IntroduceYourself(); 

    Employee employee2 = Employee("John", "Amazon", 35);
    // employee2.IntroduceYourself(); 

    /*
    employee1.setAge(15);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl; */

    employee1.AskForPromotion();
    employee2.AskForPromotion(); 

}