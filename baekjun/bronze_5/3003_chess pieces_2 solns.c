//sol1 : 아직 배열 모르는 씨린이

#include <stdio.h>

int main(void) {
  int k=1, q=1, r=2, b=2, kn=2, p=8; 
  int sk, sq, sr, sb, skn, sp;
  
  scanf("%d %d %d %d %d %d", &sk, &sq, &sr, &sb, &skn, &sp);

  printf("%d %d %d %d %d %d", k-sk, q-sq, r-sr, b-sb, kn-skn, p-sp);
  
  return 0;
}

// sol2(other's)

#include <stdio.h>

int main(void) {
  int A[6] = {1,1,2,2,2,8}, B;
  
  for (int i=0; i<6; i++){
    scanf("%d", &B);
    printf("%d ", A[i]-B);
  }

  return 0;
}
