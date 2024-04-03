#include <stdio.h>

int main(void) {
  double a, b, c;

  printf("세 개의 실수를 입력하시오\n");
  scanf("%lf %lf %lf", &a, &b, &c);

  if (a<0 || b<0 || c<0)
    printf("조건에 부합하는 삼각형은 없습니다.");
  else{
    if (a+b>c && a+c>b && b+c>a)
      printf("%lf", a+b+c);
    else
      printf("조건에 부합하는 삼각형은 없습니다.");
  }
  
  
  return 0;
}