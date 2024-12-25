#include <string.h>
#include <ctype.h>
#include <assert.h>
#include "strlib.h"
string first_name, last_name;
string::string(){
    data[0] = '\0';
}
string name("John Doe");

string::string(const char str[MAX_STRING_SIZE]){
    strcpy(data, str);
}
string::string(const string &str){
    strcpy(data, str.data);
}

void string::append_char(char ch){
    int length = strlen(data);
    assert(length < MAX_STRING_SIZE - 1);
    data[length] = ch;
    data[length + 1] = '\0';
}
boolean string::operator == (const string &str){
    return strcmp(data, str.data) == 0;
}
string& string::operator = (const string &str){
    strcpy(data, str.data);
    return *this;
}
string& string::operator = (const char str[MAX_STRING_SIZE]){
    strcpy(data, str);
    return *this;
}
std::ostream& operator << (std::ostream &os, const string &str){
    os << str.data;
    return os;
}
std::istream& operator >> (std::istream &is, string &str){
    is >> str.data;
    return is;
}