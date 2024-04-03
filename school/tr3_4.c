#include <stdio.h>

int main(void) {
  int month;

  printf("input month\n");
  scanf("%d월", &month);

  if (month == 2)
    printf("%d월의 말일은 28일입니다", month);
  else if (month == 4 || month == 6 || month == 9 || month == 11)
    printf("%d월의 말일은 30일입니다", month);
  else
    printf("%d월의 말일은 31일입니다", month);


  return 0;
}