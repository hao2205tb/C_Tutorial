#include <stdio.h>

int main(void){
    //Mở file
    FILE * fp = NULL;
    fp = fopen("memo.txt", "w");

    //Đóng file
    fclose(fp);

    return 0;
}
