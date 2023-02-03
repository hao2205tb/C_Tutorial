#include <stdio.h>
#include <string.h>


int main(void)
{
    short src[10] = {5,7,2,8,1,0,3,9,6,4};
    short dest[10];

    /*Sao chép mảng trong C bằng hàm memcpy*/
    memcpy((void *)dest, (void *)src, sizeof(src));
    
    /*Kiểm tra mảng mới*/
    for(short i = 0; i < 10; i++) {
      printf("%d ", dest[i]);
    }   
}
//> 5 7 2 8 1 0 3 9 6 4 
