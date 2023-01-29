#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int y , x;
    printf("Nhap so hang va so cot cua mang 2 chieu: ");
    scanf("%d", &y); 
    scanf("%d", &x); 
    //Khai báo con trỏ của con trỏ
    int **nums1; 
    
    /*Cấp phát bộ nhớ động cho 1 mảng mẹ gồm y phần tử, 
    để chứa địa chỉ tương ứng của y hàng trong mảng 2 chiều cần tạo*/
    /*Gán địa chỉ mảng mẹ vào con trỏ nums1*/
    nums1 = malloc(sizeof(int *) * y);
    
    /*Cấp phát bộ nhớ động cho y mảng con, mỗi mảng gồm x phần tử,
    để chứa x phần tử tương ứng trong từng hàng của mảng 2 chiều cần tạo*/
    /*Gán địa chỉ của các mảng này vào phần tử của mảng mẹ*/
    for(int i = 0; i < y; i++) {
        nums1[i] = malloc(sizeof(int) * x); 
    }

    /*Truy cập và gán giá trị lần lượt vào các phần tử của y mảng con đã tạo ở trên,
    thông qua đia chỉ của chúng được gán trong con trỏ*/
    printf("\nNhap phan tu: \n");
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            scanf("%d",&nums1[i][j]);//Gán giá trị nhập từ bàn phím vào phần tử 
        }
    }

    //In và kiểm tra mảng 2 chiều vừa khai báo
    printf("Mang 2 chieu vua nhap\n");
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
           printf("%d ", nums1[i][j]); 
        }
        printf("\n");
    }

    // Giải phóng các bộ nhớ đã dùng để lưu các phần tử sau khi đã tạo mảng
    for(int i = 0; i < y; i++) {
        free(nums1[i]);
    }
    // Giải phóng bộ nhớ đã dùng để lưu địa chỉ mảng sau khi đã tạo mảng
    free(nums1);

    return 0;
}
