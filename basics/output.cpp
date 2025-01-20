#include <iostream>
#include <complex>
#include <vector>
using namespace std;
double x {23.34};
complex<double>z{23.234};
vector<int>vec {6, 5, 6};

double sum_vector(const vector<int>&);
constexpr double product_num(const double &);
constexpr double product_num(const double &a){
    return a * 2.0;
}
int main(){
    for(const auto& elem:vec){
        cout <<elem << endl;

    }
    constexpr double result = product_num(23);
    cout << sum_vector(vec) + result;
    return 0;
}

double sum_vector(const vector<int>& vec){
    double count = 0;
    for(const auto& elem:vec){
        count += elem;
    }
    return count;
}
