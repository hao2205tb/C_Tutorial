#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "01234567890";
    char t[64]; 

    strncpy( t, str+3, 5 ); /*Cắt 5 ký tự từ vị trí thứ 3 */
    t[5] = '\0';            /*Thêm ký tự kết thúc chuỗi vào kết quả*/
    printf( "%s\n", t );
}