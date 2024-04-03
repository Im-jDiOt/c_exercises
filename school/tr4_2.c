#include <stdio.h>

int main() {
  int n, s=0;
  
  printf("정수 하나를 입력하세요\n");
  scanf("%d", &n);

  while (n/10 != 0){
    s += n%10;
    n /= 10;
  }

  printf("자릿수의 합계는 %d입니다.", s+n);
  
  return 0;
}