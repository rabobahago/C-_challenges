#include <iostream>
#include <string.h>
#include <ctype.h>
#include "boolean.h"
using std::cout;
using std::cin;
using std:: endl;
const int MAX_STRING_SIZE = 11;
typedef char string[MAX_STRING_SIZE];
//g++ intcheck.cpp -o intcheck
boolean is_integer(string str);
int to_integer(string str);
int main(){
    string number;
    cout << "Type in a number, then press <Enter>:";
    cin >> number;
    if (is_integer(number))
        cout << "The integer is "<< to_integer(number);
    else
        cout << "Not a valid representation";
    cout << endl;
    return 0;
}
boolean is_integer(string str){
    boolean no_bad_digit = TRUE;
    int i, length;
    i = 0;
    length = strlen(str);
    while ((i < length) &&  (no_bad_digit)){
        if (!isdigit(str[i])) no_bad_digit = FALSE;
        else
            ++i;
    }
    return no_bad_digit;
}
int to_integer(string str){
    int total, length;
    total = 0;
    length = strlen(str);
    for(int j = 0; j < length; ++j){
        total = 10 * total + str[j] - '0';
    }
    return total;
}