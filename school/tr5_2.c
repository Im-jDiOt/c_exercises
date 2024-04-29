#include <stdio.h>

int main(void) {
  char str[4][30];
  
  printf("문자열을 입력하세요\n");
  scanf("%s\n%s\n%s\n%s", str[0],str[1], str[2], str[3]);
  
  printf("\n출력\n%s\n%s\n%s\n%s", str[3],str[2], str[1], str[0]);
  
  return 0;
}

