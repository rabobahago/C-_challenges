#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
//Needed functions
//get_data
//determine_max
//print_results
const char SKIP = ' ';
void get_data(int &min, int &max);
void determine_max(int &min, int &max);
void print_results(int min, int max);
int main(){
    int min, max;
    get_data(min, max);
    determine_max(min, max);
    print_results(min, max);
    return 0;
}
void get_data(int &min, int &max){
    cout << "Enter first number then press <Enter key>: ";
    cin >> min;
    cout << "Enter second number then press <Enter key>: ";
    cin >> max;
}
void determine_max(int &min, int &max){
    int temp;
    if(min > max){
        temp = min;
        min = max;
        max = temp;
    }
}
void print_results(int min, int max){
    cout <<"Max: "<<max<<endl;
}