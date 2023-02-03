#include <stdio.h>

typedef struct {
    double re;    /* Phần thực */
    double im;    /* Phần ảo */
} complex_t;

//Tạo hàm nhận, tính toán và trả về thực thể của cấu trúc
complex_t addComplex(complex_t a, complex_t b){
    complex_t c;
    
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    
    return c;
}

//Tạo hàm nhận và in thực thể của cấu trúc
void printComplex(complex_t c){
    printf("%f + %f i\n", c.re, c.im);
}

int main(void){
    complex_t a = {1.2, 3.4};
    complex_t b = {5.6, 7.8};
    complex_t c;
    
    c = addComplex(a, b);
    printComplex(c);
    
    return 0;
}
