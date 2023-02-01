#include<stdio.h>

char* pop_str(char* a, char chr, char* b){
  int a_cnt;
  int b_cnt = 0;
  /* So sánh từng ký tự trong chuỗi a với ký tự c*/
  for ( a_cnt = 0; a[a_cnt] != '\0'; ++a_cnt ) {
    /* Nếu ký tự khác c thì lấy ra và thêm vào kết quả */
    if ( a[a_cnt] != chr ) {
      b[b_cnt] = a[a_cnt];
      ++b_cnt;
    }
  }
  b[b_cnt] = '\0'; /* Gán ký tự kết thúc chuỗi '\0' */
  return b;
}

int main(void){
  char a[50] = "abcdcde"; /* Chuỗi ban đầu*/
  puts(a);
  
  char b[50]; /* Chuỗi kết quả*/
  char chr = 'c'; /* Ký tự cần xóa*/
 
  puts(pop_str(a,chr,b));

  return 0;
}