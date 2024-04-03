#include <stdio.h>

int main(void) {
  int n;

  printf("정수를 하나 입력하세요.\n");
  scanf("%d", &n);

  for (int i=1; i<=n; i++){
    if (n%i)
      continue;
    else
      printf("%d ", i);
  }
  
  return 0;
}