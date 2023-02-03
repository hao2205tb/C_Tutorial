#include <stdio.h>

int main(void)
{
    FILE * fp = NULL;

    //Mở file bằng hàm fopen
    fp= fopen("sample.txt", "r");

    printf("%c\n", fgetc(fp));
    printf("%c\n", fgetc(fp));    
}
