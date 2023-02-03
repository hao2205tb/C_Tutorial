#include <stdio.h>
int main(void){
    int bangdiem[][3] = {
        {7, 9, 8} ,    
        {8, 6, 7} ,     
        {5, 7, 6} ,    
        {4, 9, 5} ,    
        {5, 8, 7} ,    
        {6, 9, 3}
    } ;

     //Lấy độ dài của mảng 2 chiều
    int y = sizeof(bangdiem) / sizeof(bangdiem[0]);          
    int x = sizeof(bangdiem[0]) / sizeof(bangdiem[0][0]);

    printf("So phan tu cua mang 2 chieu: %d",y * x);
}
//So phan tu cua mang 2 chieu: 18
