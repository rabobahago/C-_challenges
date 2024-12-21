#include <iostream>
#include <string.h>
using std::cout;
using std::cin;
using std:: endl;
const int MAX_STRING_SIZE = 11;
typedef char string[MAX_STRING_SIZE];
int main(){
    string name1, name2;
    cout << "Please enter your name1: " <<endl;
    cin>>name1;
    cout << "Please enter your name2: " <<endl;
    cin>>name2;
    if (strlen(name1) + strlen(name2) >= MAX_STRING_SIZE){
        cout <<"Error: No enough memory to concate names";
    }else{
        cout << strcat(name1, name2) << endl;
    }
    cout <<endl;
    return 0;
}