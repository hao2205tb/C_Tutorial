#include <stdio.h>
#include <math.h>

/*Định nghĩa macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) trong mảng chỉ định*/
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

int check_real_integer_number(float n){
    //flag = 1 => là số nguyên
    //flag = 0 => không phải là số nguyên

    int flag = 1;
    if (ceil(n) != floor(n)) flag = 0;
    return flag;
}

int main(void){
    float array[] = {5, 4.1, 7.2, 2, 8.9, 7, 3};
    int length= SIZE_OF_ARRAY(array);

    int i = 0, check,total=0;
    for(i = 0; i < length; i++){
        check = check_real_integer_number(array[i]);
        if( check == 1 ) {
            printf("%d ", (int)array[i]);
            total+=array[i];
        }
    }
    printf("\nTong cac so nguyen trong mang:%d ",total);
    return 0;
}
