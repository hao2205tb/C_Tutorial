#include <stdio.h>

typedef struct {   
    char name[20];
    char sex[10]; 
    int age;
    double height; 
    double weight; 
} person_1;

int main(void)
{
    person_1 p1 = {"Tom", "M", 19, 175.2, 69.5};
    person_1 p2;
    
    p2 = p1; /*Sao chép struct p1 sang p2 */

    printf("p1: %s %s %d %.1f %.1f\n", p1.name, p1.sex, p1.age, p1.height, p1.weight); 
    printf("p2: %s %s %d %.1f %.1f\n", p2.name, p2.sex, p2.age, p2.height, p2.weight); 

    return 0;
}
