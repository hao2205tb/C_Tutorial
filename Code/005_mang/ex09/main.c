#include <stdio.h>

/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length){
  for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
  printf("\n");
}
/*Tạo hàm xóa 1 phần tử trong mảng*/
int delete_one_element_from_array(int array[], int length, int position){
   int count = 0;
    /* Dịch phần tử về đầu mảng từ vị trí xóa */
    for(int i = position; i < length-1; i++) {
        array[i] = array[i+1];
    }
    /*Thay đổi giá trị phần tử cuối cùng thành NULL*/
    array[length-1] = 0;
    
    count++; 
    return count;
}

int main(void){    
   int array[100], position, length;
   printf("Nhap so phan tu: ");
   scanf("%d", &length);
 
   printf("Nhap phan tu:\n");
   for (int i = 0; i < length; i++)
      scanf("%d", &array[i]);
   
   printf("Nhap vi tri xoa: ");
   scanf("%d", &position);

    printf("Mang truoc khi xoa:\n");
    show_array(array,length);

    int count= delete_one_element_from_array(array,length, position);
    printf("Mang sau khi xoa:\n");
    show_array(array,length);

    printf("So phan tu bi xoa: %d",count);

    /*Tạo một mảng mới để lưu kết quả xóa phần tử từ mảng ban đầu*/
    int n = length -count;
    int result[n];
    for(short i = 0; i < n; i++)  result[i] = array[i]; 
    printf("\nMang ket qua:\n");   

    show_array(result,n);

    return 0;
}
