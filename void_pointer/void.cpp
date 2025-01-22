#include <iostream>
using namespace std;

void print(void* prt, char type){
    switch (type)
    {
    case 'i': cout << *((int*)prt) << "\n";
    break;
    case 'c': cout <<(*(char*)prt) <<"\n";
    break;
    case 'd': cout <<(*(double*)prt);
    break;
    }
}
int main(){
    char greeting = 'H';
    int num = 900;
    double num_d = 4995;
    print(&greeting, 'c');
    print(&num, 'i');
    print(&num_d, 'd');

}