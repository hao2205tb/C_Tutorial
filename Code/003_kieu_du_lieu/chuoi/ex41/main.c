/*
 * Hàm kiểm tra chữ hoa chữ thường trong C - Lập trình căn bản.com
 */
#include<stdio.h>

void upper_or_lower_char(char chr){
  /* kiểm tra xem ký tự đó là: chữ hoa, chữ thường hay ký tự khác */
  if((chr>= 'a') && (chr<='z')){
    printf("Chu thuong！\n");
  }
  else if((chr>= 'A') && (chr<='Z')){
    printf("Chu hoa！\n");
  }
  else {
    printf("Ky tu khac！\n");
  }

}

int main(void){

  /* Nhập ký tự */
  printf("Nhap vao 1 ky tu = ");
  char chr;
  scanf("%c", &chr);

  upper_or_lower_char(chr);

  return 0;
} 
