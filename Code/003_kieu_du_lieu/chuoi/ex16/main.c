#include <stdio.h>
#include <string.h>

int main(void){
    char str[50] = "Tom and Jerry andmae";
    char * p;

    p = strtok(str, " and ");
    printf("%s\n", p);

    while(p != NULL) {
        p = strtok(NULL, " and ");
        if(p != NULL) {
            printf("%s\n", p);
        }
    }
    return 0;
}
//Tom
//Jerry
//me
