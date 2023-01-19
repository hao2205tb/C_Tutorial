#include <stdlib.h>

void main() {
    int a = 0;
    void *pt0;
    pt0 = &a;

    void *pt1 = &a;
    void *pt2 = pt1;

    printf("a: %d, &a: %d\n",a, &a);
    printf("*pt0: %d, pt0: %d\n",*((int*)pt0), pt0);
    printf("*pt1: %d, pt1: %d\n",*((int*)pt1), pt1);

    printf("*pt2: %d, pt2: %d\n",*((float*)pt2), pt2);
}