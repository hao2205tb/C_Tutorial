#include <stdio.h>

//Định nghĩa maco có tác dụng hoán đổi 2 phần tử
#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)

//Tạo hàm đảo ngược mảng
void reverse(int* array, int size)
{
    for (int i = 0; i < size / 2; ++i) {
        SWAP(int, array[i], array[size - i - 1]);
    }
}

/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length){
  for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
  printf("\n");
}

int main(void)
{
    int array1[] = {11, 22, 33, 44,};
    int array2[] = {0, 1, 2, 3, 4, 5};

    //Lấy độ dài mảng ban đầu
    int size1 = sizeof array1 / sizeof(int);
    int size2 = sizeof array2 / sizeof(int);

    reverse(array1, size1);
    reverse(array2, size2);

    //in mảng kết quả
    show_array(array1,size1);
    show_array(array2,size2);

    return 0;
}
