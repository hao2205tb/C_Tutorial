#include <stdio.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))

/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length){
  for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
  printf("\n");
}

int main(void){
    //Khai báo 2 mảng chứa kết quả
    int negative_array[100], positive_array[100];

    //Khởi tạo mảng cần tách ra các số âm dương
    int array[] = {-5, 4, 0 , 1, -2 ,9 , 7,-8};
    
    //Sử dụng macro ở trên để lấy độ dài mảng
    int length = SIZE_OF_ARRAY(array);

    int negative_count = 0, positive_count = 0; 

    for (int i = 0; i < length; i++){
        //Kiểm tra phần tử là số âm hay dương
        //Và gán số tìm thấy vào các mảng âm dương tương ứng
        //Cũng như tăng dần số phần tử trong mảng kết quả
        if (array[i] < 0) {
            negative_array[negative_count]=array[i];
            ++ negative_count;
        } else if (array[i] > 0) {
            positive_array[positive_count]=array[i];
            ++ positive_count;
        }
    }

    //In ra mảng âm dương đã tách ra
    show_array(negative_array, negative_count);
    show_array(positive_array, positive_count);

    return 0;
}
