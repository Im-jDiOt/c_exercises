#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);
  printf("%d", N*(N-1));
  return 0;
}

// N개의 상의와 색이 겹치지 않는 N-1개의 하의를 조합하는 경우의 수
