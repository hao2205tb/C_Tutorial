#include <stdio.h>
#include <math.h>

int check_real_integer_number(float n){
    //flag = 1 => là số nguyên
    //flag = 0 => không phải là số nguyên

    int flag = 1;
    if (ceil(n) != floor(n)) flag = 0;
    return flag;
}
int main(void){
    float n;
 
    printf("Nhap so= ");
    scanf("%f",&n);

    int check = check_real_integer_number(n);
 
    if( check == 1 ) printf("So vua nhap la so nguyen");
    else if( check == 0 ) printf("So vua khong phai la so nguyen");

    return 0;
}
