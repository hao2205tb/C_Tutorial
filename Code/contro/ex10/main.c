#include <stdio.h>

typedef int (*oneArgFunPtr) (int);
typedef int (*twoArgFunPtr) (int, int);

int add(int a, int b){ return a + b;}

void main(){
    // định nghĩa hàm con trỏ
    oneArgFunPtr funPtr = (int(*)(int))add;
    printf("1+2=%d\n", ((int(*)(int, int))funPtr)(1, 2));

    // sử dụng hàm con trỏ đã định nghĩa
    oneArgFunPtr funPtr2 = (oneArgFunPtr)add;
    printf("1+2=%d\n", ((twoArgFunPtr)funPtr2)(1, 2));

    // sử dụng con trỏ void
    void* funPtr3 = add;
    printf("1+2=%d\n", ((twoArgFunPtr)funPtr3)(1, 2));

}