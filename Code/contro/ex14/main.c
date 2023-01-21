#include <stdio.h>

/*Tạo hàm nhập mảng bằng con trỏ trong C*/
void input_array(int *array, int length){
    //array: tên mảng
    //length: độ dài mảng
    for (short i = 0; i < length; i++) {
        printf("Nhap array[%d] = ", i);
        scanf("%d", (array + i));
    }
}

/*Tạo hàm xuất mảng bằng con trỏ trong C*/
void show_array(int *array, int length){
    //array: tên mảng
    //length: độ dài mảng    
    for(short i = 0; i < length; i++)  printf("%d ", *(array +i));  
    printf("\n");
}

int main(void){
    /*Nhập mảng bằng con trỏ trong c*/
    int n;
    printf(">>Nhap so phan tu: ");
    scanf("%d", &n);
 
    int array[n], *p;
    printf(">>Nhap phan tu:\n");
    input_array(array, n);
    
    /*Xuất mảng bằng con trỏ trong c*/ 
    printf(">>Mang vua nhap:\n"); 
    show_array(array, n);
}
