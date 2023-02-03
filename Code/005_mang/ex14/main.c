#include <stdio.h>
#include <assert.h>

/*Hàm tìm max trong mảng C*/
int maxElement(const int* array, size_t size){
    /*Kiểm tra và báo lỗi nếu đối số truyền vào không thoả mãn điều kiện chạy hàm*/
    assert(array != NULL);
    assert(size >= 1);

    //Giả định giá trị lớn nhất là giá trị đầu tiên của mảng.
    int max = array[0];

    /*So sánh từng phần tử trong mảng với giá trị đầu tiên để tìm ra giá trị lớn nhất*/
    for (size_t i = 1; i < size; ++i) {
        if (max < array[i]) { //Thay đổi giá trị max nếu tìm ra số lớn hơn
            max = array[i];
        }
    }
    return max;
}

/*Hàm tìm min trong mảng C*/
int minElement(const int* array, size_t size){
    /*Kiểm tra và báo lỗi nếu đối số truyền vào không thoả mãn điều kiện chạy hàm*/
    assert(array != NULL);
    assert(size >= 1);

    //Giả định giá trị nhỏ nhất là giá trị đầu tiên của mảng.
    int min = array[0];

    /*So sánh từng phần tử trong mảng với giá trị đầu tiên để tìm ra giá trị nhỏ nhất*/ 
    for (size_t i = 1; i < size; ++i) {
        if (min > array[i]) { //Thay đổi giá trị min nếu tìm ra số nhỏ hơn
            min = array[i];
        }
    }
    return min;
}
int main(void){
    int array[100], n;
    printf(">>Nhap so phan tu: ");
    scanf("%d", &n);
 
    printf(">>Nhap phan tu:\n");
    for (int i = 0; i < n; i++) scanf("%d", &array[i]);

    /*Tìm max trong mảng*/
    int max = maxElement(array,n);
    printf("max= %d\n", max);

    /*Tìm min trong mảng*/
    int min = minElement(array,n);
    printf("min= %d\n", min);

}
