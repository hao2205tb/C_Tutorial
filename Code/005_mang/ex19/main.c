#include <stdio.h>
#include <string.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))

/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length){
  for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
  printf("\n");
}

/*Tạo hàm xoá phần tử trùng trong mảng C*/
size_t array_unique(int* array, size_t size)
{
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = i + 1; j < size; ++j) {
            if (array[i] == array[j]) { //Tìm thấy phần tử trùng nhau

                // Ghi đè array[j] bằng phạm vi từ array[j + 1] đến cuối mảng, qua đó xoá array[j]
                memmove(&array[j], &array[j + 1], sizeof(int) * (size - j - 1));

                --size; // Do đã xoá array[j] nên trừ độ dài mảng đi một đơn vị

                // Do có khả năng 3 phần tử trùng nhau xuất hiện liên tiếp
                // Nên chúng ta cần kiểm tra lại vị trí j bằng cách giảm giá trị của j 1 đơn vị
                --j;
            }
        }
    }

    return size;
}


int main(void)
{
    int array1[] = { 7, 2, 6, 7, 4, 9, 8 };
    int array2[] = { 7, 2, 6, 7, 7 };
    int array3[] = { 7, 7, 7 };

    //Xoá phần tử trùng nhau trong các mảng
    size_t size1 = array_unique(array1, SIZE_OF_ARRAY(array1));
    size_t size2 = array_unique(array2, SIZE_OF_ARRAY(array2));
    size_t size3 = array_unique(array3, SIZE_OF_ARRAY(array3));

    //In các phần tử không trùng nhau đã được chuyển lên đầu mảng
    show_array(array1, size1);
    show_array(array2, size2);
    show_array(array3, size3);

    return 0;
}
