#include <stdio.h>
#include  <ctype.h>

int main(void){
    char c;
    /*Trường hợp có thể chuyển về chữ hoa*/
    c = toupper('h');
    printf("%c\n", c); //H

    c = toupper('a');
    printf("%c\n", c); //A

    /*Trường hợp không thể chuyển về chữ hoa*/ 
    c = toupper('H');
    printf("%c\n", c); //H

    c = toupper('!');
    printf("%c\n", c); //!
    
    return 0;
}
