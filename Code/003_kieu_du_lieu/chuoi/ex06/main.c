#include <stdio.h>
#include <string.h>

int main(void){
    char str1[30];
    char str2[30] = "I love C/C++";
    
    //Copy toàn bộ chuỗi str2 vào chuỗi str1
    strcpy(str1, str2);
    printf("%s\n", str1);
}
