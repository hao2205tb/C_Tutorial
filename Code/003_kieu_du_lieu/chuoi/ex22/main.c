#include <stdio.h>
#include <string.h>

int main (void) {
  char str[256] ;

  /* Nhập các chuỗi vào chương trình */
  printf("\nNhap chuoi: ");
  scanf("%s",str);

  /* Tìm độ dài chuỗi*/
  int length = strlen(str);

  /* Tạo vòng lặp để tiến hành sắp xếp ký tự trong chuỗi*/
  int i, j;
  char temp;

  for (i = 0; i < length-1; i++) {
      for (j = i+1; j < length; j++) {

         /* So sánh lần lượt các ký tự và hoán đổi giá trị nhờ biến temp*/
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
  }
   
  printf("\nKet qua: %s \n", str);
  return 0;
}
