#include <stdio.h>
#include <string.h>
int main(void){
  char str[]= "Good School";
  char chr = 'o';
  int count= 0;


  //Tính độ dài chuỗi ban đầu
  int len = strlen(str);


  //sử dụng vòng lặp for để tìm vị trí ký tự "o" trong chuỗi
  for (int i=0; i < len; i++){
      //so sánh ký tự có index i với "o"
      if (str[i] == chr){
          count += 1;
      }        
  }
  printf("Tong so lan tim thay ky tu: %d",count);
}
