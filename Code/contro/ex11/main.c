#include <stdio.h>

void main(){
    int nums[] = {10,20,30,44,55}, *p;
    p = nums;
    printf("array[0] address: %d\n", p); //Địa chỉ phần tử đầu tiên
    printf("array[1] address: %d\n", p + 1); //Địa chỉ phần tử thứ hai
    printf("array[3] address: %d\n", p + 3); //Địa chỉ phần tử thứ tư
}