#include <stdio.h>
#include <string.h>

int main(void){
    char str[50] = "Ha Noi,Ninh Binh,Nam Dinh,Thanh Hoa";
    char * p;

    //Tách chuỗi con lần đầu tiên
    p = strtok(str, ",");
    printf("%s\n", p);

    //Tách chuỗi con từ lần thứ 2 trở đi
    //Bằng cách sử dụng hàm strok cho tới khi kết quả NULL được trả về.
    while(p != NULL) {
        //Chỉ dịnh đối số NULL trong hàm strtok để tiếp tục tách chuỗi ban đầu
        p = strtok(NULL, ",");
        
        if(p != NULL) {
            printf("%s\n", p);
        }
    }
    return 0;
}