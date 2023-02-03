#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Tạo hàm GetRandom để chỉ định phạm vi sinh số ngẫu nhiên
int GetRandom(int min,int max){
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

int main(void){
    //Sử dụng hàm srand để thay đổi số nguồn sử dụng trong hàm rand
    srand((unsigned int)time(NULL));
    
    for (int i = 0;i < 10;i++) {
        printf("%d\n",GetRandom(1,6));
    }
    
    return 0;
}
