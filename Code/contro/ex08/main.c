#include <stdio.h>

int sum(int x, int y) { return x + y; }

typedef int (*cal)(int, int);

cal get_func() {
     return sum; 
}

void main(){
    cal func = get_func();
    printf("1+2=%d\n", func(1, 2));
}