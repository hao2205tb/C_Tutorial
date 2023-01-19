#include "lib.h"

int num = 0;

void num_add(int a){
    num += a;
}

void num_show(){
    printf("num: %d\n", num);
}