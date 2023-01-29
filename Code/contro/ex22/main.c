#include <stdio.h>
#include <stdlib.h>
 
typedef struct str{
    int x;
    int y;
    int *arr;
} number;
 
void init_2d_array_struct(number *num) {
    for(int i = 0; i < num->y; i++) {
        for(int j = 0; j < num->x; j++) {
            num->arr[i * num->x + j] = i * num->x + j; // Khởi tạo struct
        }
    }
}
 
int main(void) {
    // Khởi tạo và khai báo struct
    number num;
    num.x = 3;
    num.y = 5;
    // Cấp phát bộ nhớ động cho 1 mảng gồm y×x phần tử
    num.arr = malloc(sizeof(int) * num.x * num.y); 
 
    init_2d_array_struct(&num);
 
    for(int i = 0; i < num.y; i++) {
        for(int j = 0; j < num.x; j++) {
            if(j < num.x - 1) {
                printf("%d ", num.arr[i * num.x + j]);
            } else {
                printf("%d\n", num.arr[i * num.x + j]);
            }
        }
    }
 
    // Giải phóng bộ nhớ
    free(num.arr);
 
    return 0;
}
