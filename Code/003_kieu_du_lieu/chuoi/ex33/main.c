#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *trimString(char *str){
    char *end; /*Khai con trỏ của ký tự cuối cùng*/
    
    /*Vòng lặp đầu tiên để xóa khoảng trắng từ đầu chuỗi*/
    while(isspace((unsigned char)*str)) str++;

    /*Nếu vòng lặp thực hiện hết cả chuỗi thì trả về chuỗi str*/
    if(*str == 0) return str; 

    
    /*end là vị trí cuối chuỗi, cũng là vị trí bắt đầu vòng lặp thứ 2*/
    end = str + strlen(str) - 1;      
    /*Vòng lặp thứ hai để xóa khoảng trắng từ cuối chuỗi*/
    while(end > str && isspace((unsigned char)*end)) end--;

    end[1] = '\0';

    return str;
}

int main(void) {
    const char *str1 = "   Hello World     "; 
    printf("[%s]\n", str1);
    

    /*Dùng hàm strdup để copy chuỗi ban đầu và trả về con trỏ của chuỗi đó*/
    /*Gán con trỏ ở tạo bởi strdup vào con trỏ tmp*/
    char *tmp = strdup(str1); 
    printf("[%s]\n", trimString(tmp));
    
    /*Trách nhiệm giải phóng bộ nhớ thuộc về bên gọi*/
    free(tmp);
    exit(EXIT_SUCCESS);
}
