#include <iostream>
#include <string.h>
using std::cout;
using std::cin;
using std:: endl;
const int MAX_STRING_SIZE = 11;
typedef char string[MAX_STRING_SIZE];
int main(){
    string name1, name2;
    char sign;
    int order;
    cout << "Enter name1 " << endl;
    cin >> name1;
    cout << "Enter name2 " << endl;
    cin >> name2;
    order = strcmp(name1, name2);
    if (order > 0) sign = '>';
    else if(order < 0) sign = '<';
    else sign = '=';
    cout <<name1<<" "<< sign << " "<< name2 << endl;
    return 0;
}