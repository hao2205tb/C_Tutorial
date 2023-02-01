#include <stdio.h>
#include <string.h>

char* pop_child_str(char* str1,char* str2){
  const int len = strlen(str2);
  char str3[128] = "";
  char *p1 = str1, *p2;
    
    /* Tạo vòng lặp để xóa hết chuỗi con */
  while((p2 = strstr(p1,str2)) != NULL) { /*Tìm vị trí chuỗi con bằng hàm strstr*/
    strncat(str3,p1,p2 - p1);   /* Nối các phần không chứa chuỗi con */ 
    p1 = p2 + len;      /* Dịch chuyển con trỏ sang vị trí tìm kiếm tiếp theo */
  }
  strcat(str3,p1);
  printf("%s\n",str3);    
    
}

int main(void)
{
  char str1[128], str2[128];
  printf("Nhap chuoi me: ");
  scanf("%s",str1);
  printf("Nhap chuoi con can xoa: ");
  scanf("%s",str2);
  
  pop_child_str(str1,str2);

  return(0);
}
