#include<stdio.h>
#include<string.h>

int main(void)
{
  
  int i, j, num;
 
  /* Lệnh nhập số chuỗi cần nhập */
  printf("So chuoi can nhap: ");

  scanf("%d",&num);
 
  /* Khai báo chuỗi sử dụng để sắp xếp */
  char str[num][20], tmp[20];
 
  /* Nhập các chuỗi vào chương trình */
  printf("\nHay nhap %d chuoi vao chuong trinh\n",num);
  for (i=0;i<num;i++) {
    printf("Chuoi thu %d= ", i+1);
    scanf("%s", str[i]);
  }
  /* Sắp xếp */
  for(i=1;i<num;i++){
    for(j=1;j<num;j++){
      if(strcmp(str[j-1], str[j])>0){
        strcpy(tmp, str[j-1]);
        strcpy(str[j-1], str[j]);
        strcpy(str[j], tmp);
      }
    }
  }
  /* In kết quả sắp xếp*/
  printf("\n");
  for (i=0;i<num;i++)
    printf("%s\n", str[i]);
 
  return 0;
}
