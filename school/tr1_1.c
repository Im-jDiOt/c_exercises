#include <stdio.h>
# define toCM 2.54

int main(void) {
  float inch;

  printf("인치를 센티미터로 환산하는 프로그램\n인치입력(소수 둘째 자리) : ");
  scanf("%f", &inch);
  
  double cm = inch * toCM;
  
  printf("%.2finch는 %.2fcm 입니다.\n", inch, cm);
  
  return 0;
}
