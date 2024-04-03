#include <stdio.h>

int main(void) {
  int month;

  printf("input month\n");
  scanf("%d월", &month);
  switch (month){
    case 2:
      printf("%d월의 말일은 28일입니다", month);
      break;
    case 4: case 6: case 9: case 11:
      printf("%d월의 말일은 30일입니다", month);
      break;
    default:
      printf("%d월의 말일은 31일입니다", month);
  }
  
  return 0;
}