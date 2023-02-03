#include <stdio.h>
 
typedef struct person {
    char *name;
    char sex;
    int age;
    char *add;
    char *job;
} person2;
 
int main(void) {
    person2 kiyoshi = {"Kiyoshi", 'm', 30, "Tokyo", "BrSE"};
    printf("p1= %s %d %s %s\n", kiyoshi.name, kiyoshi.age, kiyoshi.add, kiyoshi.job);
    
    //Khai báo con trỏ nguồn và gán địa chỉ thực thể nguồn
    person2 *p1;
    p1 = &kiyoshi;

    //Khai báo con trỏ đích và gán địa chỉ thực thể đích
    person2 kiyoshi2, *p2;
    p2 = &kiyoshi2;
     
    //Gán con trỏ nguồn vào con trỏ đích
    //Qua đó sao chép thực thể nguồn vào thực thể đích
    *p2 = *p1;
    printf("p2= %s %d %s %s", kiyoshi2.name, kiyoshi2.age, kiyoshi2.add, kiyoshi2.job);
 
    return 0;
}
