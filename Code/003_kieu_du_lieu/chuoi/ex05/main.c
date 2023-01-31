#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))

/*
    Chèn chuỗi trong C

    Tham số
        str1:      Chuỗi ban đầu (không chấp nhận Null)
        pos:       Vị trí chèn (tính từ đầu chuỗi str1)
        str2:      Chuỗi chèn vào (không chấp nhận Null pointer)
    Giá trị trả về
        Con trỏ mảng chứa kết quả. Nếu thực thi thất bại thì trả về Null
*/
char* str_alloc_and_insert(const char* str1, size_t pos, const char* str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    // Kiểm tra vị trí chèn có nằm trong chuỗi str1 không
    assert(len1 >= pos);


    size_t result_size = len1 + len2 + 1;
    char* result = malloc(sizeof(char) * result_size);
    if (result == NULL) {
        return NULL;
    }

    // Copy phạm vi từ đầu chuỗi ban đầu tới trước vị trí cần chèn vào chuỗi kết quả
    memcpy(result, str1, pos);

    // Copy chuỗi cần chèn vào cuối kết quả
    memcpy(&result[pos], str2, len2);

    // Copy phạm vi từ vị trí cần chèn tới cuối chuỗi ban đầu vào chuỗi kết quả
    // Thêm ký tự kết thúc chuỗi `\0` vào kết quả
    strcpy(&result[pos + len2], &str1[pos]); 

    return result;
}

int main(void)
{
    char str[] = "abcde";
    printf("before: %s\n",str);

    char* result = str_alloc_and_insert(str, 2, "xyz");
    if (result != NULL) {
         printf("after: %s\n",result);
        free(result);
    }

    return 0;
}
