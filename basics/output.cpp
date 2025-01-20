#include <iostream>
#include <complex>
#include <vector>
using namespace std;
double x {23.34};
complex<double>z{23.234};
vector<int>vec {6, 5, 6};
double sum_vector(const vector<int>&);
int main(){
    for(const auto& elem:vec){
        cout <<elem << endl;

    }
    cout << sum_vector(vec);
    return 0;
}
double sum_vector(const vector<int>& vec){
    double count = 0;
    for(const auto& elem:vec){
        count += elem;
    }
    return count;
}