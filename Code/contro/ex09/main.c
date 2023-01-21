#include <stdio.h>

int add(int x, int y) { return x + y; }

typedef int (*fp)(int, int);

void main(){
    fp func1 = NULL;
    fp func2 = add;

    if (func1 == NULL) { printf("func1 is NULL\n");}
    else { printf("func1 is not NULL\n");}
    if (func2 == NULL) { printf("func2 is NULL\n");}
    else { printf("func2 is not NULL\n");}

    func1 = add;
    if (func1 == func2){ printf("func1 and func2 are equal\n");}
    if (func1 == add) { printf("func1 are point to add\n");}

}