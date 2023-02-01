#include<stdio.h>
#include <string.h>// for strlen

char* pop_str_last(char* str){
    const int len = strlen(str);
    if( len == 0 ) {
        return '\0';      // Nếu chuỗi ban đầu là Null thì trả về '\0'
    } else {
        /* Dịch chuyển ký tự kết thúc chuỗi để xóa ký tự cuối cùng*/
        str[len-1] = '\0';
        return str;// Trả về chuỗi kết quả
    }
}

int main(void){
  char a[50] = "abcdcde";
  puts(a);
  puts(pop_str_last(a));

  return 0;
}
