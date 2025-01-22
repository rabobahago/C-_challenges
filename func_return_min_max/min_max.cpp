#include <iostream>
using namespace std;
void min_max(int arr[], int size, int*min, int* max){
    for(int i = 0; i <size; i++){
        if(arr[i] < *min){
            *min = arr[i];
        }
        if (arr[i] > *max){
            *max = arr[i];
        }
    }
}
int main(){
    int arr_num[5] = {3, 1, -12, 8, 0};
    int min = arr_num[0];
    int max = arr_num[0];
    min_max(arr_num, 5, &min, &max);
    cout <<"Mininum: " << min << "\n";
    cout <<"Maxinum: "<< max << "\n";

}