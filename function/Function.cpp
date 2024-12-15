#include <iostream>
using std::cout;
using std:: cin;
using std::endl;
//function declation
//input: int x
//output: cube of x
int cube(int x);
void display();
double sqrt(int x);
int main(){
    int number;
    cout << "Please enter a number then <Enter>:";
    cin >> number;
    cout << "The cube of " << number << " is " << cube(number) << '\n';
    display();
    cout << endl;
    cout << sqrt(number);
    return 0;
}
int cube(int x){
    return x * x * x;
}
void display(){
    cout << "Hello World";
}
double sqrt(int x){
    return x * x;
}