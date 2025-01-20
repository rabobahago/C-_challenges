#include <iostream>
using namespace std;
int count_x(const char* p, char x);
int main(){
    const char* my_string = "hello worldlllllllll";
    cout << count_x(my_string, 'l') << "\n";
    return 0;
}
int count_x(const char* p, char x){
    if (p == nullptr){
        return 0;
    }
    int count = 0;
    while(*p){
        if (*p == x){
            ++count;
        }
    ++p;
    }
    return count;
}