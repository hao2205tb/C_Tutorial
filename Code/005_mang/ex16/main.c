#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))

bool array_equal(const int* array1, size_t size1, const int* array2, size_t size2)
{
    assert(array1 != NULL);
    assert(array2 != NULL);
    assert(size1 != 0);
    assert(size2 != 0);

    /*Nếu số phần tử của 2 mảng khác nhau, thì chúng sẽ khác nhau*/
    if (size1 != size2) {
        return false;
    }

    /*So sánh 2 vùng bộ nhớ chứa 2 mảng trên bằng hàm memcmp*/
    return memcmp(array1, array2, size1 * sizeof(int)) == 0;
}

int main(void)
{
    int array1[] = {0, 1, 2, 3, 4};
    int array2[] = {0, 1, 4};
    int array3[] = {0, 1, 2, 3, 4};
    int array4[] = {0, 1, 2, 3, 4, 5};

    printf("%d\n", array_equal(array1, SIZE_OF_ARRAY(array1), array1, SIZE_OF_ARRAY(array1)));
    printf("%d\n", array_equal(array1, SIZE_OF_ARRAY(array1), array2, SIZE_OF_ARRAY(array2)));
    printf("%d\n", array_equal(array1, SIZE_OF_ARRAY(array1), array3, SIZE_OF_ARRAY(array3)));
    printf("%d\n", array_equal(array1, SIZE_OF_ARRAY(array1), array4, SIZE_OF_ARRAY(array4)));

    return 0;
}
