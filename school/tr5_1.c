#include <stdio.h>

int main(){
  char str1[30], str2[30], str3[30], str4[30];
  
  printf("문자열을 입력하세요\n");
  scanf("%s\n%s\n%s\n%s", str1, str2, str3, str4);
  
  printf("\n출력\n%s\n%s\n%s\n%s", str4, str3, str2, str1);
  
  
  return 0;
}