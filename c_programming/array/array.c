#include <stdio.h>
int main(){
    int myarray[10];
    int memory_all = 10  * sizeof(int);
    int k = 10;
    printf("The memory allocated to myarray is %d bytes\n", memory_all);
    for(int i = 0; i < 10; i++){
        myarray[i] = k + 10;
        k += 10;
    }
    printf("element are:\n");
    for(int j = 0; j < 10; j++){
        printf("%d\n", myarray[j]);
    }
    return 0;
}