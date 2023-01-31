#include <assert.h>
#include <stdio.h>
#include <string.h>

#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))

/*
    Chèn chuỗi trong C

    Tham số
        str1:      Chuỗi ban đầu (không chấp nhận Null)
        str1_size: Độ dài chuỗi str1
        pos:       Vị trí chèn (tính từ đầu chuỗi str1)
        str2:      Chuỗi chèn vào (không chấp nhận Null pointer)
    Giá trị trả về
        str1
*/
char* str_insert(char* str1, size_t str1_size, size_t pos, const char* str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    // Kiểm tra str1 có đủ độ dài để chèn str2 không
    assert(len1 + len2 < str1_size);

    // Kiểm tra vị trí chèn có nằm trong chuỗi str1 không
    assert(len1 >= pos);


    // Làm trống một phạm vi dài với len2 ký tự, từ  str1[pos])
    // Dịch chuyển chuỗi ban đầu về sau, bao gồm cả ký tự `\0'
    memmove(&str1[pos + len2], &str1[pos], len1 - pos + 1);

    // Copy str2 và dán vào khoảng trống mới tạo
    memcpy(&str1[pos], str2, len2);

    return str1;
}

int main(void)
{
    char str[10] = "abcde";
    printf("before: %s\n",str);

    printf("after: %s",str_insert(str, SIZE_OF_ARRAY(str), 2, "xyz"));

    return 0;
}
