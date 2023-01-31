#include <stdio.h>
#include <string.h>

int main(void){
    char str1[30];
    char str2[30] = "I love C/C++";
    
    //Copy nhiều nhất 6 ký tự từ chuỗi str2 vào chuỗi str1
    strncpy(str1, str2,6);
    str1[6] = '\0'; //Gán ký tự kết thúc chuỗi \0
    printf("%s\n", str1);
}
