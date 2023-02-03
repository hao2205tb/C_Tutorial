#include <stdio.h>

int main(void){
    /*Khởi tạo chuỗi ban đầu*/
    short data1[10] = {5,7,2,8,1,0,3,9,6,4};

    /*Khai báo chuỗi kết quả có cùng độ dài*/
    short data2[10];

    /*Tạo vòng lặp, lấy và copy từng phần tử từ mảng cũ và gán vào mảng mới */
    for (short i = 0; i < 10; i++) {
        data2[i] = data1[i];
    }
    

    /*Kiểm tra mảng mới*/
    for(short i = 0; i < 10; i++) {
      printf("%d ", data2[i]);
    }    
}
//> 5 7 2 8 1 0 3 9 6 4 
