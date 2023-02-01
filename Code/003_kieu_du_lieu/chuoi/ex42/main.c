#include <stdio.h>
int main(void){
    
    printf("Nhap chuoi co ky tu trang: ");
    char str[10];
    fgets(str, sizeof(str)+1, stdin);

    
    printf("Chuoi vua nhap: ");
    puts(str); 
    return 0;
}
