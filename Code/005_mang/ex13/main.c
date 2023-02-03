#include <stdio.h>
#include <stdlib.h>

/*Định nghĩa macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) trong mảng chỉ định*/
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length){
  for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
  printf("\n");
}

/*Tạo hàm so sánh tăng dần sử dụng trong hàm qsort*/
int compareIntAsc(const void* a, const void* b){
    int aNum = *(int*)a;
    int bNum = *(int*)b;

    return aNum - bNum;
}


int main(void){
    int array1[] = {5, 4, 7, 2, 8, 7, 3};
    int array2[] = {99, 4, 5, 2, 80, 7, 3};

    /*Sử dụng hàm qsort để sắp xếp mảng tăng dần*/
    qsort(array1, SIZE_OF_ARRAY(array1), sizeof(int), compareIntAsc);
    qsort(array2, SIZE_OF_ARRAY(array2), sizeof(int), compareIntAsc);

    /*Xem kết quả sắp xếp mảng*/
    show_array(array1, SIZE_OF_ARRAY(array1));
    show_array(array2, SIZE_OF_ARRAY(array2));

    return 0;
}
