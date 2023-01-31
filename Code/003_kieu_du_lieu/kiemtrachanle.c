#include <stdio.h>

int check_odd_even(int n){
    //flag = 1 => số lẻ 
    //flag = 0 => số chẵn

    int flag = 1;
    if( n % 2 == 0 ) flag= 0;
    return flag;  
}

int main(void){
    printf("Nhap so nguyen= ");
    int n;
    scanf("%d",&n);

    int check = check_odd_even(n);
 
    if( check == 0 ) printf("%d la so chan\n", n);
    else printf("%d la so le\n", n);
    return 0;
}
