#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
  char s1[10] = "abA";
  char s2[10] = "aba";
  int n = 2;

  printf("Ma ascii cua a:%d\n", 'a');//Ma ascii cua a:97
  printf("Ma ascii cua A:%d\n", 'A');//Ma ascii cua A:65
  printf("Ma ascii cua b:%d\n", 'b');//Ma ascii cua b:98
  printf("Hieu ma ascii: %d\n",strncmp(s1,s2,n));//hiệu ma ascii: 0

  if(strncmp(s1,s2,2)==0){
    printf("%d ky tu dau cua 2 chuoi bang nhau", n);
  } else if(strncmp(s1,s2,2)>0){
    printf("%d ky tu dau cua %s lon hon %s", n, s1, s2);
  } else
    printf("%d ky tu dau cua %s nho hon %s", n, s1, s2);

    return 0;
}
