#include <stdio.h>
#include <string.h>

int main(void){
    char str[50] = "Ha Noi,Ninh Binh,Nam Dinh,Thanh Hoa";

    //Khai báo con trỏ chuỗi để chứa kết quả
    char * p;

    p = strtok(str, ",");
    printf("%s\n", p);
}
