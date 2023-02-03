#include <stdio.h>

int main(void)
{
    FILE * fp = NULL;
    char arr[128];

    //Mở file bằn hàm fopen
    fp= fopen("nums.txt", "r");

    //Đọc từng dòng từ file cho tới khi gặp NULL
    while (fgets(arr, 128, fp) != NULL)
    {
        //Xuất từng dòng ra màn hình
        printf("%s", arr);
    }

    fclose(fp);

    return 0;
}
