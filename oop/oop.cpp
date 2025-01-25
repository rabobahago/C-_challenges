#include <iostream>
using namespace std;
class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee{
    private:
    string Name;
    string Company;
    int Age;
    public:
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void setName(string name){
        Name = name;
    }

    string getName(){
        return Name;
    }
    void setAge(int age){
        if (age >= 18)
        Age = age;
    }

    int getAge(){
        return Age;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void IntroduceYourself(){
        cout << "Hello, my name is: " << Name <<"\n";
        cout << "Age: " << Age << "\n";
        cout << "I work for " << Company << "\n";

    }

    void AskForPromotion() override{
        if(Age >= 30)
        cout << "hello, " << Name << ". Congratulations, You have been promoted" << "\n";
        else
        cout << "hello, " << Name << ". Sorry, You have not been promoted" << "\n";
    }
};
class Developer: Employee{
    public:
        string FavProgrammingLanguage;
        Developer(string name, string company, int age, string favProgrammingLanguage): Employee(name, company, age){
            FavProgrammingLanguage = favProgrammingLanguage;
        }
        void fixedBug(){
            cout << getName() << " fixed bug with his favourite programming language, guess the language: wala, It is  " << FavProgrammingLanguage << "\n";
        }
};
int main(){
    // Employee employee1 = Employee("Rabo Yusuf", "Amazon Dev", 12);
    // employee1.AskForPromotion();
    Developer developer = Developer("Rabo", "Open IA", 37, "c++");
    developer.fixedBug();

}