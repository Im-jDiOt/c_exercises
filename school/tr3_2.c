#include <stdio.h>

int main(void) {
  int num = 100;

  while (num>20){
    printf("20 이하 정수를 입력하세요.\n");
    scanf("%d", &num);
  }
    switch (num){
      case 2: case 3: case 5: case 7: case 11: case 13: case 17: case 19:
        printf("소수입니다.");
        break;
      default:
        printf("소수가 아닙니다.");
    }
  
  
  return 0;
}