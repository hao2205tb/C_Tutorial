#include <stdio.h>
int main(void){
    /*Khởi tạo chuỗi ban đầu*/
    short data1[2][10] = {{5,7,2,8,1,0,3,9,6,4}, {-5,-7,-2,-8,-1,0,-3,-9,-6,-4}};

    /*Khai báo chuỗi kết quả có cùng độ dài*/
    short data2[2][10];
    
    /*Tạo vòng lặp, lấy và copy từng phần tử từ mảng cũ và gán vào mảng mới */
    short i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 10; j++) {
            data2[i][j] = data1[i][j];
        }
    }

    /*Kiểm tra mảng mới*/
    for (i = 0; i < 2; i++){
        for (j = 0; j < 10; j++) {
            printf("%d ",data2[i][j]);
        }
        printf("\n");
    }    
}
//  5 7 2 8 1 0 3 9 6 4 
// -5 -7 -2 -8 -1 0 -3 -9 -6 -4 
