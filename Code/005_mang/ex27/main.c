#include <stdio.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))

/*Tạo hàm kiểm tra số nguyên tố trong C*/
int check_prime_number(int n){
    //flag = 0 => không phải số nguyên tố
    //flag = 1 => số nguyên tố
    
    int flag = 1;

    if (n <2) return flag = 0; /*Số nhỏ hơn 2 không phải số nguyên tố => trả về 0*/
    
    /*Sử dụng vòng lặp while để kiểm tra có tồn tại ước số nào khác không*/
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; /*Chỉ cần tìm thấy 1 ước số là đủ và thoát vòng lặp*/
        }
        i++;
    }

    return flag;
}

/*Tạo hàm in ra các số nguyên tố trong mảng C*/
void show_prime_number_from_array(int array[], int length){
    int prime_number[100];

    for (int i = 0; i < length; i++){
      //Kiểm tra phần tử là số nguyên tố hay không
      //Nếu là số nguyên tố thì in ra màn hình     
      if (check_prime_number(array[i]) == 1)  printf("%d ",array[i]);
    }
    
}
int main(void){
    //Khởi tạo mảng in ra các số nguyên tố
    int array[] = {0,1,2,3,4,5,6,7,8,9,10};

    //in ra các số nguyên tố trong mảng C bằng hàm đã tạo
    show_prime_number_from_array(array,SIZE_OF_ARRAY(array));

    return 0;
}
