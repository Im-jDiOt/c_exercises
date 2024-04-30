#include <stdio.h>

int main(void) {
  int N, min, max;
  scanf("%d", &N);
  scanf("%d", &min);
  max = min;

  for(int i=1; i<N; i++){
    int newNum;
    scanf("%d", &newNum);
    
    if(min<=newNum&&newNum<=max) continue;
    else if(newNum>max) max = newNum;
    else min = newNum;
  }

  printf("%d %d", min, max);
  
  return 0;
}
