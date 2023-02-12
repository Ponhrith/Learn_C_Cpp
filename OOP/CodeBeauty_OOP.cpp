#include <iostream>
using std::string;

class Employee{
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


};

int main()
{
    Employee employee1 = Employee("Pony", "Dolphin", 16);
    // employee1.Name = "Pony";
    // employee1.Company = "Dolphin";
    // employee1.Age = 16;
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Le Petit Prince", "Earth", 12);
    // employee1.Name = "Le Petit Prince";
    // employee1.Company = "Earth";
    // employee1.Age = 12;
    employee1.IntroduceYourself();

    employee1.setAge(39);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old " << std::endl;




}