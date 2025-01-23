#include <iostream>
using namespace std;
class Employee{
    public:
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void IntroduceYourself(){
        cout << "Hello, my name is: " << Name <<"\n";
        cout << "Age: " << Age << "\n";
        cout << "I work for " << Company << "\n";

    }
};
int main(){
    Employee employee1 = Employee("Rabo", "Apple Developer real", 23);
    employee1.IntroduceYourself();

}