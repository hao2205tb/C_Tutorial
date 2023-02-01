#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   long val;
   char str[20];
   
   strcpy(str, "11111.22abac");
   val = atof(str);
   printf("%s => %ld\n", str, val);

   return(0);
}
