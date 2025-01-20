#include <iostream>
using namespace std;
int v[8] = {2, 3, 4, 5, 7, 1000, 10, 8};

int main(){
    int* p = &v[5];
    int y = *p;
    cout << y <<"\n";
    int v[] = {2, 4, 5, 6};
    for(auto& x: v){
        cout << --x <<"\n";
    }
    return 0;
}