#include <stdio.h>

void func(){
    static int i = 0;
    i++;
    printf("i:%d\n", i);
}

void main(){
    func();
    func();
    func();
}