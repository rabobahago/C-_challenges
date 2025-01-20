#ifndef STRLIB_H
#define STRLIB_H

#include <iostream>
#include "boolean.h"

//declaration section
const int MAX_STRING_SIZE = 21;

class string {
    public:
    //Class constructors
    string();
    string(const char str[MAX_STRING_SIZE]);
    string(const string &str);
    //member functions
    int length();
    char nth_char(int n);
    void append_char(char ch);
    boolean operator == (const string &str);
    boolean operator < (const string &str);
    boolean operator > (const string &str);
    boolean operator <= (const string &str);
    boolean operator >= (const string &str);
    boolean operator != (const string &str);
    string& operator = (const char str[MAX_STRING_SIZE]);
    string& operator = (const string &str);
    friend std::istream& operator >> (std::istream &is, string &str);
    friend std::ostream& operator << (std::ostream &os, const string &str);
    private:
    char data[MAX_STRING_SIZE];
};

#endif