#include <stdio.h>

int sum(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }


int operator(int (*func)(int, int), int x, int y) {
     return func(x, y); 
}

void main(){
    printf("1+2=%d\n", operator(sum, 1, 2));
    printf("1-2=%d\n", operator(sub, 1, 2));
}