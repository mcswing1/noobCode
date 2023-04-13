// Reference URL: https://www.youtube.com/watch?v=wN0x9eZLix4&t=388 - 52:25
// Polymorphism is the ability of an object or a method to have many forms. 1:16:25
// The most common use of polymorphism in programming is when a parent class reference is used to refer to an object of a child class.

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

    // When a virtual function is invoked, it will check to see if there is an implementation of that function in the derived (aka sub) classes. - 1:25:22
    // If the function does not exist in the derived class, the one that is in the parent class will be executed. 
    virtual void Work() { 
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }

};

class Developer: public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
            :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug() {
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }

    void Work() { 
        std::cout << Name << " is writing " << FavProgrammingLanguage << " code" << std::endl;
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

    void Work() { 
        std::cout << Name << " is teaching " << Subject << std::endl;
    }

};

int main()
{
    
    Developer d = Developer("Saldina", "YT-CodeBeauty", 25, "C++");
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    // d.Work();
    // t.Work();

    // Create a pointer of type Employee - 1:21:58
    // Assign to the pointer a reference to both the Developer and Teacher class
    Employee* e1 = &d; 
    Employee* e2 = &t; 

    // -> is used when you want to access members using a pointer. 
    e1->Work();
    e2->Work(); 

}