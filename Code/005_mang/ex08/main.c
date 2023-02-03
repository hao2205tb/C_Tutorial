#include <stdio.h>
#include <string.h>

int main(void){
    int array1[] = {1,2,3};
    int array2[] = {4,5};

    /*Tìm kích thước và chiều dài của các mảng cần ghép*/
     int size1 = sizeof array1,  length1 = sizeof array1/ sizeof(int); 
     int size2 = sizeof array2,  length2 = sizeof array2/ sizeof(int); 


    /* Khai báo mảng kết quả với độ dài đủ để chứa 2 mảng trên*/
    int result[length1 + length2];
     
     /* Copy mảng đầu tiên vào mảng kết quả*/
    memcpy(result,array1,size1);  
    
    /* Copy mảng thứ 2 vào vị trí cuối mảng 1 trong mảng kết quả*/
    memcpy(&result[length1],array2,size2); 


    /*Kiểm tra kết quả ghép nối mảng*/
    for(short i = 0; i < 5; i++) {
      printf("%d ", result[i]);
    }   
}
//> 1 2 3 4 5 
