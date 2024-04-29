#include <stdio.h>

int main(void) {
  char str[30];
  int cnt = 0;
  
  printf("단어를 입력하세요\n");
  scanf("%s", str);

  while (str[cnt] != '\0'){
    cnt++;
  }

  for(int i=0; i<(cnt/2); i++){
    if (str[i] != str[cnt-1-i]){
      printf("회문이 아닙니다");
      return 0;
    }
  }

  printf("회문입니다");
  
  return 0;
}