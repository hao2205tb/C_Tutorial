#include <stdio.h>

void func1();
void func2(int a, int b);
void func3(int, int);

void main(){
    func1();
    func2(1, 2);
    func3(1, 2);
}

void func1(){
    printf("func1\n");
}

void func2(int a, int b){
    int add = a + b;
    printf("func2, a+b=%d\n", add);
}

void func3(int a, int b){
    int sub = a - b;
    printf("func2, a-b=%d\n", sub);
}