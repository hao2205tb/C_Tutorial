#include <stdio.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))

/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length){
  for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
  printf("\n");
}

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

int main(void){
    //Khai báo mảng chứa kết quả
    int prime_number_array[100];

    //Khởi tạo mảng tách ra các số nguyên tố
    int array[] = {0,7,2,3,6,5};

    //Sử dụng macro ở trên để lấy độ dài mảng
    int length = SIZE_OF_ARRAY(array);

    int prime_number_count = 0;
    for (int i = 0; i < length; i++){
        //Kiểm tra phần tử là số âm hay dương
        //Và gán số tìm thấy vào các mảng âm dương tương ứng
        //Cũng như tăng dần số phần tử trong mảng kết quả
        if (check_prime_number(array[i]) == 1) {
          prime_number_array[prime_number_count]=array[i];
          ++ prime_number_count;
        } 
    }

    //In ra mảng số nguyên tố đã tách ra
    show_array(prime_number_array, prime_number_count);

    return 0;
}
