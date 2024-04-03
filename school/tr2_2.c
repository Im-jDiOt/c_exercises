#include <stdio.h>

int main(void) {
  char chr;

  printf("알파벳 입력: ");
  scanf("%c", &chr);

  printf("입력한 알파벳: %c\n", chr);
  printf("입력한 아스키코드값: %d\n", (int)chr);
  printf("입력한 알파벳 + 8: %c", (char)((int)chr+8));
  
  return 0;
}