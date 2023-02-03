#include <stdio.h>
#include <stdlib.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))

/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length){
  for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
  printf("\n");
}

/*Tạo hàm so sánh tăng dần sử dụng trong hàm qsort*/
int compareIntAsc(const void* a, const void* b)
{
    int aNum = *(int*)a;
    int bNum = *(int*)b;

    return aNum - bNum;
}

/*Tạo hàm xoá phần tử trùng lặp trong mảng đã sắp xếp*/
void array_unique(int* array, size_t size){
    size_t end = 0;  

    for (size_t i = 1; i < size; ++i) {
        if (array[i] != array[end]) { 
            ++end; 
            array[end] = array[i]; 
        }
    }
    //Liệt kê các phần tử xuất hiện một lần trong mảng C
    show_array(array, end+1);
}

int main(void){
    int array1[] = { 7, 2, 6, 7, 4, 9, 8 };
    int array2[] = { 7, 2, 6, 7, 7 };
    int array3[] = { 7, 7, 7 };

    // Sắp xếp các mảng theo thứ tự tăng dần
    qsort(array1, SIZE_OF_ARRAY(array1), sizeof(int), compareIntAsc);
    qsort(array2, SIZE_OF_ARRAY(array2), sizeof(int), compareIntAsc);
    qsort(array3, SIZE_OF_ARRAY(array3), sizeof(int), compareIntAsc);

    //Xoá phần tử trùng nhau và liệt kê các phần tử duy nhất
    array_unique(array1, SIZE_OF_ARRAY(array1));
    array_unique(array2, SIZE_OF_ARRAY(array2));
    array_unique(array3, SIZE_OF_ARRAY(array3));    

    return 0;
}
