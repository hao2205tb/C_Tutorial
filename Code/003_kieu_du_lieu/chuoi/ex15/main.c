#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char str[] = "A100B20C3000D40";
    char *p, *q;
    p=str;

    while(q=strtok(p,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz")){
        p=NULL;
        printf("%s\n", q);
    }
    return 0;
} 