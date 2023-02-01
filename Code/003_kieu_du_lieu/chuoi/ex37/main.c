#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   float val;
   char str[20];
   
   strcpy(str, "11.22abac");
   val = atof(str);
   printf("%s => %.2f\n", str, val);

   return(0);
}