#include <stdio.h>

int main() {
    int I, R, K;
    scanf("%d", &I);
    scanf("%d", &R);
    scanf("%d", &K);

    double min = (K + 1) / 2.0; // 최소 중앙값
    double delta = 0; // 중앙값 증가량
    int i = 0; // 횟수 - K는 짝수일 때 delta 정하기 위해 필요
    int cnt = 0; // 만족하는 수의 개수

    if (K % 2 == 1) { // K가 홀수일때
        while (K * (min + delta) <= R) {
            if (I <= K * (min + delta)) {
                cnt += 1;
                delta += 1;
            } else {
                delta += 1;
            }
        }
    } else { // K가 짝수일때
        while (K * (min + delta) <= R) {
            if (I <= K * (min + delta)) {
                cnt += 1;
                if (i < (K - 1) / 2) {
                    delta += 1;
                    i += 1;
                } else {
                    delta += 0.5;
                }
            } else {
                if (i < (K - 1) / 2) {
                    delta += 1;
                    i += 1;
                } else {
                    delta += 0.5;
                }
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}
