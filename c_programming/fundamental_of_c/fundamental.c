#include <stdio.h>
#include "constants.h"
void print_placeholder();
int main(){
    float radius = 2.3478, a = 68;
    float area = PI * radius * radius;
    printf("\n area: %f and the constant float %f", area, a * 4);
    printf("\n These are blank number: %*d", 6, 500);
    printf("\n hello world %3d", 60);
    printf("\n precision %10.4d\n", 24);
    printf("\n precision %-10.4d\n", 24);
    printf("\n character sign of + or -: %+d", -234);
    printf("\n % d", 4);
    printf("\n \"");
    printf("\n %%");
    printf("The numerical is in million ||: %6.2f \n", 6.3);
    print_placeholder();
    return 0;
}
void print_placeholder(){
    int i = 123;
    float j = 105658;
    float k = 0.0006;
    int m;
    int a, b, c;
    m = scanf("%d %d %d", &a, &b, &c);
    printf("\n Total value inputted %d", m);
    printf("\n The input values %d %d %d\n", a, b, c);
    printf("\n%5d %8.2f %f", i, j, k);

}