#include <stdio.h>

int main(void){
    
    int nums[100], *p;
    p = nums;

    //Nhập giá trị tại địa chỉ phần tử đầu tiên
    printf("Nhap nums[0] = ");
    scanf("%d", p);

    //Nhập giá trị tại địa chỉ phần tử thứ hai
    printf("Nhap nums[1] = ");
    scanf("%d", (p + 1)); 

    //Nhập giá trị tại địa chỉ phần tử thứ ba
    printf("Nhap nums[2] = ");
    scanf("%d", (p + 2)); 

    printf("nums[0]= %d\n", nums[0]);
    printf("nums[1]= %d\n", nums[1]);
    printf("nums[2]= %d\n", nums[2]);    
    return 0;
}
