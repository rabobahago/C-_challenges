#include <iostream>
#include<memory>
using namespace std;
int main(){
    unique_ptr<int>num_unique = make_unique<int>(90);
    cout << *num_unique <<endl;
    unique_ptr<int>num_point1 = make_unique<int>(900);
    cout <<*num_point1 <<endl;
    unique_ptr<int>num = move(num_point1);
    cout << *num <<endl;

}