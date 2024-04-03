#include <stdio.h>

int main(){
  int n, sum=0;
  
  printf("정수 하나를 입력하세요.\n");
  scanf("%d", &n);
  for(int i; i<=n; i++){
    if(i%5)
      sum += i;
    else
      continue;
  }
  printf("합계는 %d입니다", sum);
  return 0;
}