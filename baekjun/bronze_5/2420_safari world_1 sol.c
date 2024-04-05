#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, M;
  scanf("%d %d", &N, &M);
  printf("%lld", llabs((long long)N - M));
  
  return 0;
}

// N, M 정의할 때 long long으로 정의해서 casting 안 하는 방법도 있다.
// 수범위 꼭 확인해서 자료형 선택하기..! (파이썬은 엄청나게 편안한 언어여따...ㅜㅠ)
