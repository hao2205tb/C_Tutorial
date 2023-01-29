#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int y , x;
    printf("Nhap so hang va so cot cua mang 2 chieu: ");
    scanf("%d", &y); 
    scanf("%d", &x);
 
    int *nums2;
    //Cấp phát bộ nhớ động cho 1 mảng gồm y×x phần tử
    //Gán địa chỉ mảng trên vào con trỏ nums2
    nums2 = malloc(sizeof(int) * x * y);
 
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
             scanf("%d",&nums2[i * x + j]);//Gán giá trị nhập từ bàn phím vào phần tử 
        }
    }
    
    //In và kiểm tra mảng 2 chiều vừa khai báo
    printf("Mang 2 chieu vua nhap\n");
     for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
               if(j < x -1) {
                    printf("%d ", nums2[i * x + j]);
               } else {
                    printf("%d\n", nums2[i * x + j]);
               }
        }
    }
    
    // Giải phóng bộ nhớ
    free(nums2);
 
    return 0;
}
