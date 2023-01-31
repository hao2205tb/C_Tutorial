#include <stdio.h>
#include <math.h>
int find_square_number(int n){
    //flag = 1 => số chính phương
    //flag = 0 => không phải số chính phương
    
    int flag = 0;

    //Tìm số bất kỳ nhỏ hơn hoặc bằng n mà bình phương bằng n
    int i = 0;
    while(i <= n){
        if( pow( i, 2) == n ) {   
            flag = 1;
            break; /*Chỉ cần tìm thấy 1 ước số là đủ và thoát vòng lặp*/
        }
        i++;
    }

    return flag;
}

int main(void){
    int n;
 
    printf(">> nhap mot so tu nhien: ");
    scanf("%d",&n);

    int check = find_square_number(n);
 
    if( check == 1 ) printf("%d la so chinh phuong\n", n);
    else printf("%d khong phai la so chinh phuong\n", n);
    return 0;
}
