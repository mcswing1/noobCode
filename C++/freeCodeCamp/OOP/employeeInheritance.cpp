// Reference URL: https://www.youtube.com/watch?v=wN0x9eZLix4&t=388 - 52:25
// Inheritance has a base class (aka parent class or super class) which has certain attributes. - 52:41
// A derived class (aka child class or subclass) can obtain all of the attributes and behaviors or the base class. It can then add its own attributes and behaviors. - 53:25

#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion() = 0; 
}; 

class Employee:AbstractEmployee {
private:
    string Company;
    int Age;

protected: 
    // Moved Name from private to protected. 
    string Name;

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

    // Constructor for the Employee class 
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age; 

    }

    virtual void AskForPromotion() {
        if(Age>30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << " , sorry No promotion for you!" << std::endl;
    }

};

// Developer is a subclass of Employee class. 
// Ever class, when it is created, automatically generates a default constructor. - 58:42
// Since the Developer class is a subclass of Employee class and Employee has a constructor, we have to provide a constructor for the derived class.

// Inheritance from the parent class is private by default (which means Develop subclass cannot access the AskForPromotion method). - 1:08:40
// We can fix the issue by making the parent class public. 
class Developer: public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        // We only need to initialize the attribute for the Developer class as the other attributes have already been initialized in the parent class. - 1:01:00
        // We just pass the properties of the Employee parent class to the Employee class
            :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug() {
        // We use the getter function for Name because the Name value is private (aka inaccessible).
        // If we want to access the Name function directly from the parent class, we need to change the Name function to protected, which will make it accessible for derived classes. - 1:06:45
        // std::cout << getName() << " fixed bug using " << FavProgrammingLanguage << std::endl;
        // Once we change the Name attribute to protected, we no longer need to use the getter method to access it. - 1:07:10
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }
};

class Teacher: public Employee {
public:
    string Subject; 
    
    void PrepareLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
    }

    Teacher(string name, string company, int age, string subject) 
        :Employee(name, company, age)
    {
        Subject = subject; 
    }
};

int main()
{
    // Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25); 
    // Employee employee2 = Employee("John", "Amazon", 35);
    // Developer d = Developer("Saldina", "YT-CodeBeauty", 25, "C++");
    // d.FixBug();
    // d.FixBug();
    // d.FixBug();
    // Once the Employee parent class is made public, the Developer subclass can now access its methods. 
    // d.AskForPromotion();

    Teacher t = Teacher("Jack", "Cool School", 35, "History"); 
    t.PrepareLesson(); 
    t.AskForPromotion();

    // employee1.AskForPromotion();
    // employee2.AskForPromotion(); 

}