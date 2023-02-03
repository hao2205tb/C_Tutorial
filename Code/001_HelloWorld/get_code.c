#include <stdio.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))

/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length){
    for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
    printf("\n");
}

/*Tạo hàm kiểm tra số chẵn lẻ trong C*/
int check_odd_even(int n){
    //flag = 1 => số lẻ 
    //flag = 0 => số chẵn

    int flag = 1;
    if( n % 2 == 0 ) flag= 0;
    return flag;  
}

int main(void){
    //Khai báo 2 mảng chứa kết quả  
    int odd_array[100], even_array[100];

    //Khởi tạo mảng cần tách ra các số chẵn lẻ
    int array[] = {-2,-1,0,1,2,3,4,5,6,7,8};

    //Sử dụng macro ở trên để lấy độ dài mảng    
    int length = SIZE_OF_ARRAY(array);

    int odd_count = 0, even_count = 0; 

    for (int i = 0; i < length; i++){
        //Kiểm tra phần tử là số chẵn hay lẻ
        //Và gán số tìm thấy vào các mảng chẵn lẻ tương ứng
        //Cũng như tăng dần số phần tử trong mảng kết quả        
        if (check_odd_even(array[i]) == 1) {
          odd_array[odd_count]=array[i];
          ++ odd_count;
        } else {
          even_array[even_count]=array[i];
          ++ even_count;
        }
    }

    //In ra mảng chẵn lẻ đã tách ra
    show_array(odd_array, odd_count);
    show_array(even_array, even_count);

    return 0;
}
