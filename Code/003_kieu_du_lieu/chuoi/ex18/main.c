#include <assert.h>
#include <stdio.h>
#include <string.h>

/*Tạo hàm cắt chuỗi trong C*/
char* substring(char* source, size_t begin, size_t n, char* target){ 
    int target_size = sizeof(target);

    /*Kiểm tra đầu vào và phát hiện lỗi nếu có*/
    assert(source != NULL);
    assert(target != NULL);
    assert(n + 1 <= target_size);
    
    /*Kiểm tra vị trí cắt có nằm trong chuỗi không*/
    if (begin < strlen(source)) {
        /*Cắt n ký tự từ vị trí begin trong chuỗi source*/
        strncpy(target, source + begin, n);
        /*Thêm ký tự kết thúc chuỗi vào kết quả*/
        target[n] = '\0';
    }
    /* Bỏ qua hàm nếu như vị trí bắt đầu cắt nằm ngoài chuỗi ban đầu*/ 
    else {    
        target[0] = '\0';
    }

    return target;
}

int main(void){
    char str[] = "abcdef";
    char target[4];

    puts(substring(str, 0, 3, target )); //Cắt 3 ký tự từ vị trí 0 
    puts(substring(str, 2, 3, target )); //Cắt 3 ký tự từ vị trí 2 
    puts(substring(str, 2, 0, target));  //Cắt 0 ký tự từ vị trí 2 
    puts(substring(str, 5, 3, target));  //Cắt 3 ký tự từ vị trí 5 

    return 0;
}
