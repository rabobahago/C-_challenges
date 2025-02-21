#include <stdio.h>
int area(int *length, int *breath){
    int result;
    result = (*length) * (*breath);
    *length = 30;
    printf("Length inside the function invocation %d\n", *length);
    return (result);
}


int main(){
    int l, b, result;
    printf("Enter the length of your shape: \n");
    scanf("%d", &l);
    printf("Enter the breath of your shape: \n");
    scanf("%d", &b);
    printf("Length before function invocation %d\n", l);
    result = area(&l, &b);
    printf("Length after the function invocation %d\n", l);
    printf("The area is: %d", result);
    return 0;
}