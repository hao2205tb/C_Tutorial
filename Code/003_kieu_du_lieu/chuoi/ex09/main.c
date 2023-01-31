#include <stdio.h>
#include <string.h>

int main(void){
    char str1[20] = "I Lov";
    char str2[10] = "e You";
    
    strcat(str1, str2);
    printf("%s\n", str1);
}
