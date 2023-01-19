#include <stdio.h>

void main(){
    int a = 0;

    int *pt0;
    pt0 = &a;

    int *pt1 = &a;

    printf("a: %d, &a: %d\n",a, &a);
    printf("*pt0: %d, pt0: %d\n",*pt0, pt0);
    printf("*pt1: %d, pt1: %d\n",*pt1, pt1);
}