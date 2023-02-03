#include <stdio.h>

//Khai báo cấu trúc biểu diễn số phức
typedef struct {
    double re;    /* Phần thực */
    double im;    /* Phần ảo */
} complex_t;

//Tạo hàm nhận và in thực thể của cấu trúc
void printComplex(complex_t c)
{
    printf("%f + %f i\n", c.re, c.im);
}

int main(void){
    //Tạo một thực thể từ cấu trúc
    complex_t c = {1.2, 3.4};
    
    //Truyền thực thể vào hàm
    printComplex(c);
}
