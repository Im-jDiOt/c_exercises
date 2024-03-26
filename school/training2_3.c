#include <stdio.h>

int main(void) {
  int num;
  
  printf("정수를 입력하세요.\n");
  scanf("%d", &num);
  printf("%s\n\n", num%2 ? "홀수" : "짝수");

  printf("정수를 입력하세요.\n");
  scanf("%d", &num);
  printf("%s\n", num%2 ? "홀수" : "짝수");
  
  return 0;
}