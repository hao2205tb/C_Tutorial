#include <stdio.h>
#include <stdlib.h>
 
void init_2d_array(int *arr, int x, int y) {
     for(int i = 0; i < y; i++) {
          for(int j = 0; j < x; j++) {
               arr[i * x + j] = i * x + j; // Khởi tạo giá trị trong mảng
          }
     }
}
 
int main(void) {
     int x = 3, y = 5;
 
     int *nums;
    //Cấp phát bộ nhớ động cho 1 mảng gồm y×x phần tử
    //Gán địa chỉ mảng trên vào con trỏ nums     
     nums = malloc(sizeof(int) * x * y); 
 
     init_2d_array(nums, 5, 3);
 
     for(int i = 0; i < y; i++) {
          for(int j = 0; j < x; j++) {
               if(j < x - 1) {
                    printf("%d ", nums[i * x + j]);
               } else {
                    printf("%d\n", nums[i * x + j]);
               }
          }
     }
 
     // Giải phóng bộ nhớ
     free(nums);
 
     return 0;
}
