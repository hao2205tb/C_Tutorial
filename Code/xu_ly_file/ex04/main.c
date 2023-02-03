#include <stdio.h>

int main(void)
{
    FILE * fp = NULL;
    char arr[128];

    //Mở file bằn hàm fopen
    fp= fopen("nums.txt", "r");

    //Đọc dòng 1
    fgets(arr, 128, fp);
    printf("%s", arr);
    
    //Đọc dòng 2
    fgets(arr, 128, fp);
    printf("%s", arr);
    
}
