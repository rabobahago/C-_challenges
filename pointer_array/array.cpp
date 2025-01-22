#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i = 0; i <= 4; i++){
        cout << "Enter numbers: ";
        cin >> arr[i];
        cout << "\n";
    }
    for(int i = 0; i <= 4; i++){
        cout <<  *(arr + i) << "\n";
    }

}