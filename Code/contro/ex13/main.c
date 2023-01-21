#include <stdio.h>
int main(void){
    
    int nums[] = {10,20,30,44,55}, *p;
    p = nums;

    printf("%d\n", nums[2]);
    printf("%d\n", *(p +2) );

    printf("%d\n", nums[4]);
    printf("%d\n", *(p +4) );
    return 0;
}
