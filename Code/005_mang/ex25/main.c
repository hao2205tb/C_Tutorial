#include <stdio.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))


/*Tạo hàm liệt kê các phần tử xuất hiện một lần trong mảng C*/
void array_unique(int* array, size_t size){
    for (size_t i = 0; i < size; ++i) {
        size_t count = 0; 

        for (size_t j = 0; j < size; ++j) {

            if (array[i] == array[j] &i!=j) { 
                //Tìm thấy phần tử trùng nhau thì tăng biến đếm
               count += 1;
            }
        }
        /*Nếu count vẫn bằng 0 thì phần tử đang kiểm tra 
         chỉ xuất hiện 1 lần duy nhất trong mảng*/
        if(count==0) printf("%d ",array[i]); 
    }
    printf("\n");
}

int main(void){
    int array1[] = { 7, 2, 6, 7, 4, 9, 8 };
    int array2[] = { 7, 2, 6, 7, 7 };
    int array3[] = { 7, 7, 7 };

 
    //Xoá phần tử trùng nhau và liệt kê các phần tử xuất hiện một lần trong kết quả
    array_unique(array1, SIZE_OF_ARRAY(array1));
    array_unique(array2, SIZE_OF_ARRAY(array2));
    array_unique(array3, SIZE_OF_ARRAY(array3));    

    return 0;
}
