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

/*Tạo hàm xóa nhiều phần tử trong mảng*/
int delete_elements_from_array(int array[], int length, int positions[], int delete_num){
    int n = 0;
    int count=0;

    for (int i=0; i< delete_num; i++){
        int position= positions[i] - count;

        n += delete_one_element_from_array(array,length, position);
        count++;
 
    }
    return n;
}
int main(void){
   int array[100], positions[100], length, delete_num;
   printf("Nhap so phan tu: ");
   scanf("%d", &length);
 
   printf("Nhap phan tu:\n");
   for (int i = 0; i < length; i++) scanf("%d", &array[i]);

   printf("Nhap so phan tu can xoa: ");
   scanf("%d", &delete_num);

   printf("Nhap vi tri xoa:\n");
   for (int i = 0; i < delete_num; i++) scanf("%d", &positions[i]);   

    printf("Mang truoc khi xoa:\n");    
    show_array(array,length);
    
    int count= delete_elements_from_array(array,length, positions,delete_num);
    printf("Mang sau khi xoa:\n");   
 
    show_array(array,length);
    printf("So phan tu bi xoa: %d\n",count);    
    /*Tạo một mảng mới để lưu kết quả xóa phần tử từ mảng ban đầu*/
    int n = length -count;
    int result[n];
    for(short i = 0; i < n; i++)  result[i] = array[i]; 
    printf("Mang ket qua:\n");   

    show_array(result,n);

    return 0;
}
