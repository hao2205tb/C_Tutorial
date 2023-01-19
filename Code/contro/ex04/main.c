#include <stdlib.h>

void add( int *pt){
    *pt += 1;
}


void main() {
    int a = 0;

    add(&a);
    printf("%d\n", a);

    add(&a);
    printf("%d\n", a);
}