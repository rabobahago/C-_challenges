#include <iostream>
using namespace std;

int num_func(int a, int b){
    return a + b;
}
int main(){
  int (*num_f)(int, int) = num_func;
  cout << num_func(2, 3);
  cout <<num_f(4, 5);
}