#include <stdlib.h>

void main() {
    int a = 0;
    int *pt = &a;

    a ++;
    printf("a = %d, *pt = %d\n", a, *pt);

    *pt += 1;
    printf("a = %d, *pt = %d\n", a, *pt);

    printf("before: &a = %d, pt = %d\n", &a, pt);
    *pt ++; // không được dùng vì sẽ làm thay đổi địa chỉ pt.
    printf("after: &a = %d, pt = %d\n", &a, pt);
    printf("a = %d, *pt = %d\n", a, *pt);


}