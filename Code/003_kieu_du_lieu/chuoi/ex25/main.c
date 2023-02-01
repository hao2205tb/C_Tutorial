#include <stdio.h>
#include <string.h>

int main(void){
    char str[30] = "Good School";

    //Khai báo con trỏ chuỗi để chứa kết quả
    char * p;

    p = strchr(str, 'o');
    printf("%s\n", p);
}