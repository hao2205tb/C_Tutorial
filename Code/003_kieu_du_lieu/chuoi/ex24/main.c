#include<stdio.h>

/* Tạo hàm đảo ngược chuỗi trong C*/
void str_reverse(char str[]) {
  int lo = 0;
  int length;
  for (length = 0; str[length] != '\0' ; length++) {} 
  while ( lo < length ) {
    --length;
    char tmp = str[lo];
    str[lo] = str[length];
    str[length] = tmp;
    ++lo;
  }
}

int main() {
    char str[100];
    
    /* Nhập chuỗi cần đảo ngược từ bàn phím*/
    printf("Nhap chuoi: ");
    scanf("%s", str);
    
    /* Gọi hàm đảo ngược chuỗi*/
    str_reverse(str);

    /* In kết quả*/
    printf("Chuoi viet nguoc: %s", str);
    return 0;
}
