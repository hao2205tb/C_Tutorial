#include<stdio.h>
#include<ctype.h>
#include <string.h>

int main(void){
  int n = 0;
  char str[100] = "27 thang 8\t2021";
  printf("%s\n",str);
  
  const int len = strlen(str);

  for(int i = 0; i < len; i++){
    if(isspace(str[i])) n += 1;
  }
  
  printf("So khoang trang: %d\n",n);
  return 0;
}
