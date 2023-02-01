#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void)
{
    int number,l;
    char string[20];
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    itoa(number,string,10);
    
    printf("String value = %s\n", string);
    
    return 0;
}
