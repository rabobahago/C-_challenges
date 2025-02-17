#include <stdio.h>
int main(){
    char string[90];
    printf("Please type your text: \n");
    gets(string);
    printf("The text is: ");
    puts(string);
    return 0;
}