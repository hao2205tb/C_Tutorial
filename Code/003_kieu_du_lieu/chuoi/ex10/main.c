#include <stdio.h>
#include <string.h>

int main(void){
    char str1[20] = "I Lov";
    char str2[10] = "e You";
    
    strncat(str1, str2,3);
    printf("%s\n", str1);
}