#include <stdio.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))


/*Tạo hàm đếm số lần xuất hiện của một phần tử trong mảng C*/
int count_element_in_array(int* array, int size, int x){
    int count = 0;
    for(int i=0;i<size;i++){
      if(array[i]==x) //Tìm thấy phần tử giống x trong mảng thì cộng biến đếm
        count ++;
    }
    return count;
}

int main(void){
    int array[] = { 7, 2, 6, 7, 4, 9, 8 };

    int x = 7;

    int count = count_element_in_array(array, SIZE_OF_ARRAY(array) , x);
    printf("Phan tu %d xuat hien %d lan\n",x,count);
    
    x = 4;
    count = count_element_in_array(array, SIZE_OF_ARRAY(array) , x);
    printf("Phan tu %d xuat hien %d lan",x,count);    

    return 0;
}
