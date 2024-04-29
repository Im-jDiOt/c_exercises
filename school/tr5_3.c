#include <stdio.h>

int main(void) {
  int nums[5];
  int min, max;

  printf("5개의 정수를 입력하시오\n");
  
  for (int i=0; i<5; i++){
    scanf("%d", &nums[i]);

    min = (i==0 || nums[i] < min) ? nums[i] : min;
    max = (i==0 || nums[i] > max) ? nums[i] : max;
  }

  printf("최소값 %d, 최대값 %d", min, max);
  
  return 0;
}