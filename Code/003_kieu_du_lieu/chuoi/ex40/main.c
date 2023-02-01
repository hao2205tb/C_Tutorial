#include <stdio.h>

/*Hàm chuyển chữ thường thành chữ hoa trong C*/
char upper(char c){
    if('a' <= c && c <= 'z'){
        c = c - ('a' - 'A');
    }
    return c;
}

/*Hàm chuyển chữ hoa thành chữ thường trong C*/
char lower(char c){
    if('A' <= c && c <= 'Z'){
        c = c + ('a' - 'A');
    }
    return c;
}

int main(void){
    char c;

    c = lower('L');
    printf("%c\n", c);

    c = upper('l');
    printf("%c\n", c);

    return 0;
}
