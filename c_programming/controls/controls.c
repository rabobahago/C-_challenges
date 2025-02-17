#include <stdio.h>
int main(){
    int x, y;
    float product;
    printf("Enter a number between 1 to 4\n");
    scanf("%d %d", &x, &y);
    product = (float) x * (float) y;
    switch(x){
        case 1: printf("The guess number is %d\n", x);
        break;
        case 2: printf("The guess number is %d\n", x);
        break;
        case 3: printf("The guess number is %d\n", x);
        break;
        case 4: printf("The guess number is %d\n", x);
        break;
        default:printf("The guess number is %d, You guess a number above 4.\n");
    if (product > 200){
        printf("The product of %d and %d is greater than 200\n", x, y);
    }else{
        printf("The product of %d and %d is less than 200\n", x, y);
    }
    return 0;
    }
}
