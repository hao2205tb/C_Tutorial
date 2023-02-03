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
 
//Tạo hàm so sánh 2 struct trong c
int compare_struct(person2 *p1, person2 *p2) {
    // return 1: Khác nhau
    // return 0: Giống nhau

    //So sánh các thành viên thuộc kiểu số
    if(p1->sex != p2->sex || p1->age != p2->age) {
        return 1;
    }

    //So sánh các thành viên thuộc kiểu chuỗi bằng hàm strcmp
    if(strcmp(p1->name, p2->name) != 0) {
        return 1;
    }
    if(strcmp(p1->add, p2->add) != 0) {
        return 1;
    }
    if(strcmp(p1->job, p2->job) != 0) {
        return 1;
    }
    return 0;
}
 
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
    person2 honda = {"honda", 'm', 30, "Tokyo", "BrSE"};
 
    // So sánh struct kiyoshi và kiyoshi2
    if(compare_struct(&kiyoshi, &kiyoshi2) == 0) {
        printf("struct %s giong struct %s\n", "kiyoshi", "kiyoshi2");
    } else {
        printf("struct %s khac struct %s\n", "kiyoshi", "kiyoshi2");
    }

    // So sánh struct kiyoshi và honda
    if(compare_struct(&kiyoshi, &honda) == 0) {
        printf("struct %s giong struct %s\n", "kiyoshi", "honda");
    } else {
        printf("struct %s khac struct %s\n", "kiyoshi", "honda");
    }

    return 0;
}
