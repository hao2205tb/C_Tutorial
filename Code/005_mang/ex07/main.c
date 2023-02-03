#include <stdio.h>
 
int main()
{
   int array[100], position, c, n, value;
   printf("Nhap so phan tu: ");
   scanf("%d", &n);
 
   printf("Nhap phan tu:\n");
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
   
   printf("Mang da nhap:");
   for (c = 0; c < n; c++)
      printf("%d ", array[c]);

   printf("\nNhập vi tri chen phan tu: \n");
   scanf("%d", &position);
 
   printf("Nhập phan tu muon chen: \n");
   scanf("%d", &value);
   
   // Dịch chuyển các phần tử từ vị trí cần chèn (position) về phía sau 1 đơn vị
   // Và làm trống vị trí position
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
   
   /*Chèn phần tử vào chỗ trống vừa tạo*/
   array[position-1] = value;
 
   printf("Mang sau khi chen:\n");
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
   return 0;
}
