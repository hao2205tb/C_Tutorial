#include <stdio.h>

void main(){
    int i = 0;
    int *p1 = &i;
    int **p2 = &p1;

    i++;
    printf("i=%d, &i=%d\n", i, &i);
    printf("*p1=%d, p1=%d, &p1 = %d\n", *p1, p1, &p1);
    printf("*p2=%d, p2=%d, p2 = %d\n", **p2, *p2, p2);

    **p2 += 1;
    printf("i=%d, &i=%d\n", i, &i);
    printf("*p1=%d, p1=%d, &p1 = %d\n", *p1, p1, &p1);
    printf("*p2=%d, p2=%d, p2 = %d\n", **p2, *p2, p2);

}