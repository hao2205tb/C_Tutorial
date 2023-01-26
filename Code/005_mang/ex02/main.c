#include <stdio.h>

void main(){
    int mat[3][4] = {{0, 1, 2, 3}, 
                      {4, 5, 6, 7},
                      {8, 9, 10, 11}};

    for (int i = 0; i <3; i +=1){
        for (int j = 0; j <4; j +=1){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    mat[2][0] = 0;
    printf("mat[2][0] = %d", mat[2][0]);
}