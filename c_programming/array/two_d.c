#include <stdio.h>
int main(){
    int i, j, m = 4, n = 4;
    int twodArray[4][4] = {{2, 4, 5, 7}, {5, 7, 9, 2}, {1, 2, 4, 6}, {6, 1, 4, 6}};
    printf("The elements of the array are:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", twodArray[i][j]);

        }
        printf("\n");
    }
    return 0;
}