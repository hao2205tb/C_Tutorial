#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))


/*Hàm so sánh 2 mảng trong C*/
int array_equal(const int* array1, size_t size1, const int* array2, size_t size2){
    //flag = 1 => 2 mảng đã cho giống nhau
    //flag = 0 => 2 mảng đã cho khác nhau

    int flag = 1;

    /*Kiểm tra đối số truyền vào mảng có thỏa mãn điều kiện chạy hàm không*/
    assert(array1 != NULL);
    assert(array2 != NULL);
    assert(size1 != 0);
    assert(size2 != 0);

    /*Nếu số phần tử của 2 mảng khác nhau, thì chúng sẽ khác nhau*/
    if (size1 != size2)  return flag = 0;
    

    /*Kiểm tra từng cặp phần tử tương ứng xem có cặp nào khác nhau không*/
    for (size_t i = 0; i < size1; ++i) {
        if (array1[i] != array2[i])  return flag = 0; 
        
    }
    return flag;
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
