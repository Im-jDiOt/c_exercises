#include <stdio.h>

int main(void) {
  int a, b;

  printf("첫 번째 정수 입력\n");
  scanf("%d", &a);
  printf("두 번째 정수 입력\n");
  scanf("%d", &b);

  printf("\n몫은 %d, 나머지는 %d", a/b, a%b);
  
  return 0;
}