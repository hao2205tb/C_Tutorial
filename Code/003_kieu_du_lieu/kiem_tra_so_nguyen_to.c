#include <stdio.h>
int isprime(int n){
    //flag = 0 => không phải số nguyên tố
    //flag = 1 => số nguyên tố
    
    int flag = 1;

    if (n <2) return flag = 0; /*Số nhỏ hơn 2 không phải số nguyên tố => trả về 0*/
    
    /*Sử dụng vòng lặp while để kiểm tra có tồn tại ước số nào khác không*/
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; /*Chỉ cần tìm thấy 1 ước số là đủ và thoát vòng lặp*/
        }
        i++;
    }

    return flag;
}

int main(void){
    int n;
 
    printf("Nhap so tu nhien= ");
    scanf("%d",&n);

    int check = isprime(n);
 
    if( check == 1 ) printf("%d la so nguyen to\n", n);
    else printf("%d khong phai la so nguyen to\n", n);
    return 0;
}
