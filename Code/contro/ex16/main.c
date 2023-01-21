#include <stdio.h>

void main ()
{
   char *hotensv[] = {
                   "Tran Hung Cuong",
                   "Ho Ngoc Ha",
                   "Nguyen Son Tung",
                   "Dam Vinh Hung",
   };

   for ( int i = 0; i < 4; i++) {
      printf("Gia tri cua hotensv[%d] = %s\n", i, hotensv[i]);
   }
   
}