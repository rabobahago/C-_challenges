#include <stdio.h>
int main(){
    int x, y;
    float simple, r;
    printf("Enter values of x, y in integer and r in float:\n");
    scanf("%d %d %f", &x, &y, &r);
    simple = ((float) y * (float) x * r) / 100;
    printf("The simple interest is: %f", simple);
    return 0;
}