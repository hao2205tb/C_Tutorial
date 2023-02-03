#include <stdio.h>
#include <string.h>
 
//Khai báo struct person
typedef struct person {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person2;
 
int main(void) {
    person2 kiyoshi = {"kiyoshi", 'm', 30, "Tokyo", "BrSE"};
     
    //Tạo kiyoshi2 giống kiyoshi 
    //bằng cách copy struct kiyoshi sang kiyoshi2 thông qua con trỏ
    person2 *p1;
    p1 = &kiyoshi;
    person2 kiyoshi2, *p2;
    p2 = &kiyoshi2;
 
    *p2 = *p1; 

    //Tạo thực thể honda khác kiyoshi bằng cách khởi tạo giá trị mới
    person2 honda = {"sato", 'm', 30, "Tokyo", "BrSE"};
 
    // So sánh struct kiyoshi và kiyoshi2
    if(memcmp(&kiyoshi, &kiyoshi2, sizeof(person2)) == 0) {
        printf("struct %s giong struct %s\n", "kiyoshi", "kiyoshi2");
    } else {
        printf("struct %s khac struct %s\n", "kiyoshi", "kiyoshi2");
    }

    // So sánh struct kiyoshi và honda
    if(memcmp(&kiyoshi, &honda, sizeof(person2)) == 0) {
        printf("struct %s giong struct %s\n", "kiyoshi", "honda");
    } else {
        printf("struct %s khac struct %s\n", "kiyoshi", "honda");
    }

    return 0;
}
