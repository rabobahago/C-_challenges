#include <stdio.h>
#define PI 3.143

int main(){
    float radius, area;
    printf("Please, enter the circle radius\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area of the circle radius you provided is: %f\n", area);
    return 0;
}