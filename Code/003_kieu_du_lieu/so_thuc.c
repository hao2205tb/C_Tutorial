#include <stdio.h>
#include <float.h>

int main()
{
   printf("Lop luu tru cho so thuc (float) la: %d \n", sizeof(float));
   printf("Gia tri so thuc duong nho nhat la: %E\n", FLT_MIN );
   printf("Gia tri so thuc duong lon nhat la: %E\n", FLT_MAX );
   printf("Do chinh xac: %d\n", FLT_DIG );
   
   return 0;
}
