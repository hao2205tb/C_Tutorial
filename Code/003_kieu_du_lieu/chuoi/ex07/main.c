#include <stdio.h>
#include <string.h>
 
int main(void) {
    char str1[16] = "Hello World!";
    char str2[16];
 
    //Copy toàn bộ chuỗi str2 vào chuỗi str1
    strcpy_s(str2, 16, str1);
    printf("%s\n", str2);
    return 0;
}
