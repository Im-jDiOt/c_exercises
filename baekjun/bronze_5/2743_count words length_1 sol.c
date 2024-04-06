#include <stdio.h>

int main(void) {
  char s[100];
  int len=0;
  
  scanf("%s", s);

  while (s[len] != '\0'){len++;}

  printf("%d", len);

  
  return 0;
}

// 왜 s[100]일 때에도 100개 알파벳 넣으면 되는거지?
// Null 문자가 들어갈 장소가 없는 거 아닌가?
//abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde (<=100개 테스트)
