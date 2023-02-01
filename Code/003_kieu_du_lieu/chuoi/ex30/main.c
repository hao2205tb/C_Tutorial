#include<stdio.h>
#include<ctype.h>

int main(){
    int c[5] = {'\n', '2', 1, ' ', ','};
    for(int i = 0; i < 5; i++){
        if(isspace(c[i])) {
                printf("c[%d] la khoang trang\n",i);
        }
    }
}
