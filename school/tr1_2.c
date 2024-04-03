#include <stdio.h>
# define toKM 1.61

int main(void) {
  float mile;

  printf("마일을 킬로미터로 환산하는 프로그램\n마일입력(소수 둘째 자리) : ");
  scanf("%f", &mile);
  
  double km = mile * toKM;

  printf("%.2f마일은 %.2fkm 입니다.\n", mile, km);
  
  return 0;
}
