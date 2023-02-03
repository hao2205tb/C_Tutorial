#include <stdio.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))


/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length){
  for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
  printf("\n");
}

/*Thay đổi hàm kiểm tra phần tử trùng nhau ở phương pháp một*/
/*Và tạo hàm lấy phần tử trùng trong mảng C*/
void take_duplicate_element(const int* array, size_t size){
    int result[100], count=0;

    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = i + 1; j < size; ++j) {
            if (array[i] == array[j]) {    
            result[count]=array[i];
              ++ count;
            }
        }
    }

    show_array(result, count);
}

int main(void){
    int array1[] = {1,2,3,3,2,5}; 
    int array2[] = {1,1,2,3,2,5,5,8,9,6}; 

    //Lấy phần tử trùng nhau
   take_duplicate_element(array1,SIZE_OF_ARRAY(array1));
   take_duplicate_element(array2,SIZE_OF_ARRAY(array2));
    

    return 0;
}
