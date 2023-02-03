#include <stdio.h>

int main(void)
{
    FILE * fp = NULL;
    //Mở file bằn hàm fopen
    fp= fopen("sample.txt", "r");

    char c;
    //Đọc từng ký tự từ file cho tới khi gặp EOF
    while ((c = fgetc(fp)) != EOF)
    {
        //Xuất từng ký tự ra màn hình
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}
