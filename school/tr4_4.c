#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // setting variables
  int n;

  printf("10 미만의 홀수 하나를 입력하세요.\n");
  scanf("%d", &n);

  int m = (n + 1) / 2;

  // vertical
  for (int i = 1; i <= n; i++) {

    // horizontal
    int gap = abs(i - m);

    for (int j = 1; j <= gap; j++)
      printf(" ");
    for (int j = 1; j <= n - 2 * gap; j++)
      printf("*");

    // for next line
    printf("\n");
  }

  return 0;
}