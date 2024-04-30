#include <stdio.h>

int main(void) {
  int a, b;

  while(scanf("%d %d", &a, &b)==2) {
    printf("%d\n", a+b);
  }
  
  return 0;
}

// scanf는 함수가 읽어들여 저장에 성공한 데이터 개수를 반환한다.
