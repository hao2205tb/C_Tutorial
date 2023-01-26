#include <stdio.h>

void main(){
    int mat1[3] = {0, 1, 2};
    int mat2[] = {3, 4, 5};  

    printf("mat1 %d %d %d\n", mat1[0], mat1[1], mat1[2]);

    int mat3[6];
    mat3[0] = 0;
    mat3[1] = 1;
    printf("mat3 %d %d %d\n", mat3[0], mat3[1], mat3[2]);
}