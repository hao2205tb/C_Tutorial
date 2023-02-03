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


/*Tạo hàm đếm số lần xuất hiện của các phần tử trong mảng C*/
void array_unique(int* array, size_t size){
    int count =1;
    for (size_t i = size-1; i > 0; --i) {
        //printf("Phan tu %d",array[i-1]);
        if (array[i] == array[i-1]) ++count; //Tìm thấy phần tử trùng nhau
        else{
             printf("Phan tu %d xuat hien %d lan\n",array[i], count);
             count = 1;
        }
         
    }
    printf("Phan tu %d xuat hiẹn %d lan\n",array[0], count);
}

int main(void)
{
    int array1[] = { 7, 2, 6, 7, 4, 9, 8 };

    // Sắp xếp các mảng theo thứ tự tăng dần
    qsort(array1, SIZE_OF_ARRAY(array1), sizeof(int), compareIntAsc);
    show_array(array1, SIZE_OF_ARRAY(array1));

    //Đếm số lần xuất hiện của các phần tử trong mảng C
    array_unique(array1, SIZE_OF_ARRAY(array1));

    return 0;
}
