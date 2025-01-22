#include <iostream>
using namespace std;
int main(){
    int count = 200;
    int* ref_count = &count;
    cout << ref_count <<"\n";
    cout<< *ref_count <<"\n";
    *ref_count = 1000;
    cout<< *ref_count;
    return 0;
}