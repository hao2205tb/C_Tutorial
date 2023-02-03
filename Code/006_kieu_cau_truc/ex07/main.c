#include <stdio.h>
#include <string.h>

/*Định nghĩa macro SWAP để hoán đổi phần tử trong mảng chỉ định*/
#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)

#define PERSON_NUM 5

//Khai báo kiểu cấu trúc
typedef struct {   
    char name[20];
    char sex; 
    int age;
    double height; 
    double weight; 
} person_t;

//Tạo hàm in kiểu cấu trúc
void show_struct(person_t array[], int n){
    for (short i = 0; i < PERSON_NUM; i++) {
      printf("\n%s %c %d %.1f %.1f",array[i].name,array[i].sex,array[i].age,array[i].height,array[i].weight);
   }
    printf("\n");
}

//Tạo hàm sắp xếp struct tăng dần theo chiều cao
void asc_order_height(person_t array[], int n){
    //Tạo vòng lặp để sắp xếp struct
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            //Nếu tìm ra phần tử có thành viên height lớn hơn
            //thì hoán đổi với số đang xét
            if (array[i].height > array[j].height) SWAP(person_t,array[i],array[j]); 
        }
    }
}

//Tạo hàm sắp xếp struct giảm dần theo chiều cao
void desc_order_height(person_t array[], int n){
    //Tạo vòng lặp để sắp xếp struct
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            //Nếu tìm ra phần tử có thành viên height nhỏ hơn
            // thì hoán đổi với số đang xét
            if (array[i].height < array[j].height) SWAP(person_t,array[i],array[j]);  
        }
    }
}
// Tạo hàm sắp xếp struct tăng dần theo tên
void asc_order_name(person_t array[], int n){
    //Tạo vòng lặp để sắp xếp struct
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            //Nếu tìm ra phần tử có thành viên name lớn hơn
            // thì hoán đổi với số đang xét
            if (strcmp(array[i].name, array[j].name) > 0) SWAP(person_t,array[i],array[j]);   
        }
    }
}

// Tạo hàm sắp xếp struct giảm dần theo tên
void desc_order_name(person_t array[], int n){
    //Tạo vòng lặp để sắp xếp struct
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            //Nếu tìm ra phần tử có thành viên name nhỏ hơn
            // thì hoán đổi với số đang xét
            if (strcmp(array[i].name, array[j].name) < 0) SWAP(person_t,array[i],array[j]);   
        }
    }
}

int main(void){
    //Khởi tạo mảng cấu trúc với 5 thực thể được tạo ra từ cấu trúc
    person_t p[PERSON_NUM] = {{"Bob", 'M', 19, 165.4, 72.5},
                              {"Ali", 'F', 19, 161.7, 44.2},
                              {"Tom", 'M', 20, 175.2, 66.3},
                              {"Ste", 'F', 18, 159.3, 48.5},
                              {"Leo", 'M', 19, 172.8, 67.2}};

    printf("Mang struct ban dau:");
    show_struct(p,PERSON_NUM);
    
    printf("\nSap xep theo chieu cao tang dan:");
    asc_order_height(p,PERSON_NUM);
    show_struct(p,PERSON_NUM);
    
    printf("\nSap xep theo chieu cao giam dan:");
    desc_order_height(p,PERSON_NUM);
    show_struct(p,PERSON_NUM);
    
    printf("\nSap xep theo ten tang dan:");
    asc_order_name(p,PERSON_NUM);
    show_struct(p,PERSON_NUM);
    
    printf("\nSap xep theo ten giam dan:");
    desc_order_name(p,PERSON_NUM);
    show_struct(p,PERSON_NUM);    
}
