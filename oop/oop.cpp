#include <iostream>
using namespace std;
class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee{
    private:

    protected:
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
    virtual void work(){
        cout<< "I am " << Name << " by name, I work as a CEO at " << Company << "\n";
        cout << "\n";
    }
};
class Developer: public Employee{
    public:
        string FavProgrammingLanguage;
        Developer(string name, string company, int age, string favProgrammingLanguage): Employee(name, company, age){
            FavProgrammingLanguage = favProgrammingLanguage;
        }
        void work() override{
            cout << getName() << " fixed bug with his favourite programming language, guess the language: wala, It is  " << FavProgrammingLanguage << "\n";
        }
};
class HiringManager: public Employee{
    public:
        string Hiring;
    HiringManager(string name, string company, int age, string hiring): Employee(name, company, age){
        Hiring = hiring;
    }
    void work() override{
        cout<< "I am " << Name << " by name, I work as a " << Hiring;
    }
};
int main(){
    Employee employee1 = Employee("Rabo Yusuf", "Amazon Dev", 12);
    employee1.AskForPromotion();
    Developer developer = Developer("Rabo", "Open IA", 37, "c++");

    HiringManager hiring = HiringManager("Rabo Yusuf", "Microsoft", 34, "Hiring Manager");

    Employee* d = &developer;
    Employee* t = &hiring;
    d->work();
    t->work();

}