#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str[] = "A100B20C3000D40";

    char result[100];
    int i=0;
    int n=0;


    for(i=0; i<=strlen(str); ++i){
        /* Kiểm tra ký tự thứ i trong chuỗi đã cho có phải là số hay không*/
        /* Nếu là số thì lưu vào chuỗi result*/
        if(isdigit(str[i])){ 
            result[n] = str[i];
            n++;
            result[n] = '\0';
        }else if(n){ /* Nếu chuỗi result chứa phần tử thì in chuỗi result*/
            printf("%s\n",result);
            n=0; /* Reset và làm rỗng chuỗi result*/
        }
    }
    return 0;
}
