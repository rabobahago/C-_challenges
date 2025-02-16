#include <stdio.h>
int main(){
    int a;
    float b;
    char var_str;
    char string[] = "I will love to watch this football match";
    var_str = getchar();
    // gets(string);
    scanf("%d %f", &a, &b);
    printf("Here are the numbers: %d %f\n", a, b);
    putchar(var_str);
    puts(string);
    return 0;
}