#include <stdio.h>

int main(void)
{
    FILE * fp1 = NULL;
    FILE * fp2 = NULL;
    errno_t no1;
    errno_t no2;

    //Lần mở file đầu tiên với fopen_s
    no1 = fopen_s(&fp1, "memo.txt", "w");
    if (no1 != 0)
    {
        printf("ERR(%d): mo lan 1", no1);
    }

    //Lần mở cùng một file thứ 2 với fopen_s
    no2 = fopen_s(&fp2, "memo.txt", "w");
    if (no2 != 0)
    {
        printf("ERR(%d): mo lan 2", no2);
    }

    return 0;
}
