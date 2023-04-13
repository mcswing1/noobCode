// Reference URL: https://www.youtube.com/watch?v=wN0x9eZLix4&t=388 - 29:40
// Encapsulation bundles data in methods that operate on that data into a class. This prevents anything outside of the class from directly accessing, interacting, or modifying the data. 
// Encapsulation is done by providing specific public functions that the other classes can invoke and interact with the data. - 30:41
// How do you access encapsulated properties of a class? Through its methods (usually implemented as getters and setters). - 30:50

#include <iostream>
using std::string;

class Employee {
// We can no longer access these properties outside of the Employee class. - 32:05
private:
    string Name;
    string Company;
    int Age;

// We access the properties above by exposing methods (getters and setters), which will be public, which will allow other classes and users to interact with those properties. - 32:45
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

    // We can provide special rules to interact with the private properties. - 37:25
    void setAge(int age) {
        // We add a validation rule so all employees are older than 18
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

};

int main()
{
    Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25); 
    employee1.IntroduceYourself(); 

    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.IntroduceYourself(); 

    employee1.setAge(15);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;

}