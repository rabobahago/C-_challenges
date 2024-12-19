#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void remainder(int &first, int &second);
int main(){
    int this_first, this_second;
    remainder(this_first, this_second);
}
void remainder(int &first, int &second){
    float remainder;
    cout << "Enter a number" << endl;
    cin >> first;
    cout << "Enter another number" << endl;
    cin >> second;
    remainder = second % first;

    cout << "Remainder is "<< remainder;

}