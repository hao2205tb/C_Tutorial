#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
  char s1[] = "ab";
  char s2[] = "aAb";

  printf("Ma ascii cua a:%d\n", 'a');
  printf("Ma ascii cua A:%d\n", 'A');
  printf("Ma ascii cua b:%d\n", 'b');
  printf("Hieu ma ascii: %d\n",strcmp(s1,s2));

  if(strcmp(s1,s2)==0){
     printf("%s bang %s", s1,s2);
  } else if(strcmp(s1,s2)>0){
         printf("%s lon hon %s", s1,s2);
  } else
        printf("%s nho hon %s", s1,s2);

    return 0;
}
