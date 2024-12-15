#include <iostream>
using std::cout;
using std:: cin;
using std::endl;
//function declation
void get_data(int &width, int &height);
int main(){
    int x, y;
    get_data(x, y);
}
void get_data(int &width, int &height){
    cout << "Enter the width" <<endl;
    cin >> width;
    cout << "Enter the height" <<endl;
    cin >> height;
}