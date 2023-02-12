#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age >= 18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
    
  

    void IntroduceYourself(){
        std::cout << "Name -" << Name << std::endl;
        std::cout << "Company -" << Company << std::endl;
        std::cout << "Age -" << Age << std::endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion(){
        if(Age>30)
            std::cout<<Name<< " got promoted " << std::endl;
        else
            std::cout<<Name<< " , sorry No promotion for you!";

    }

};

class Developer:public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
    :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug(){
        std::cout << getName() << "fixed bug using" << FavProgrammingLanguage << std::endl;
    }

};

int main()
{
    // Employee employee1 = Employee("Pony", "Dolphin", 16);
    // employee1.Name = "Pony";
    // employee1.Company = "Dolphin";
    // employee1.Age = 16;
    // employee1.IntroduceYourself();

    // Employee employee2 = Employee("Le Petit Prince", "Earth", 12);
    // employee1.Name = "Le Petit Prince";
    // employee1.Company = "Earth";
    // employee1.Age = 12;
    // employee1.IntroduceYourself();

    // employee1.setAge(39);
    // std::cout << employee1.getName() << " is " << employee1.getAge() << " years old " << std::endl;

    // Employee employee1 = Employee("Pony", "Dolphin", 26);
    // Employee employee2 = Employee("Le Petit Prince", "Earth", 12);

    // employee1.AskForPromotion();
    // employee2.AskForPromotion();

    Developer d = Developer("Tommy", "Shelby Company Limited", 25, "C++");
    d.FixBug();
    d.AskForPromotion();


}