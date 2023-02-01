#include <stdio.h>
#include  <ctype.h>

int main(void){
    char c;
    /*Trường hợp có thể chuyển về chữ thường*/
    c = tolower('H');
    printf("%c\n", c); //h

    c = tolower('A');
    printf("%c\n", c); //a

    /*Trường hợp không thể chuyển về chữ thường*/ 
    c = tolower('a');
    printf("%c\n", c); //a

    c = tolower('8');
    printf("%c\n", c); //8
    
    return 0;
}
