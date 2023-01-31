#include <stdio.h>
 
int main(void) {
    char str1[10] = "Hello";
    char str2[10] = "C";
    char str3[10] = "World!";

    char target[100];
 
    sprintf(target, "%s %s %s\n", str1, str2,str3);
    printf("%s", target);
 
    return 0;
}