#include <stdlib.h>

int add(int x, int y) { return x + y; }

void main() {
    int (*func1)(int, int);
    func1 = add;
    int (*func2)(int, int) = add;

    printf("1+2=%d\n", func1(1, 2));
    printf("1+2=%d\n", (*func2)(1, 2));
}