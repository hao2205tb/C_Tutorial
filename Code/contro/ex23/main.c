#include <stdio.h>
#include <stdlib.h>


void main(){
    int *mat = malloc(sizeof(int) * 3);
    mat[0] = 0;
    mat[1] = 1;
    mat[2] = 2;

    for (int i=0; i<3; i++){
        printf("%d ", mat[i]);
    }
    
    free(mat);

}