#include <stdio.h>

void main(void){
    char *ptr = "Hello";
    for (int i=0; i<5; i++) {
        printf("%c ",ptr[i]);
    }
}
