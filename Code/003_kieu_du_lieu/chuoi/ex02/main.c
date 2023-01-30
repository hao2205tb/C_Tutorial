#include <stdio.h>
#include <string.h>

int main(void){
    char str[30] = "Good School";
    char * p;

    p = strstr(str, "oo");
    printf("%s\n", p);
}
