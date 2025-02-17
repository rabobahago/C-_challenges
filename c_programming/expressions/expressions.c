#include <stdio.h>
#include <math.h>
int main(){
    float x, y, square, sinx, cosx, tanx, atanx;
    x = 144.0;
    square = sqrt(x);
    y = 78 * (3.142 / 180.0);
    sinx = sin(y);
    cosx = cos(y);
    tanx = tan(y);
    atanx = atan(y);
    printf("Squre root of x = %f\n", square);
    printf("Sine value of y = %f\n", sinx);
    printf("Cosine value of y = %f\n", cosx);
    printf("Tangent value of y = %f\n", tanx);
    printf("Arc tangent value of y = %f\n", atanx);
    return 0;
}