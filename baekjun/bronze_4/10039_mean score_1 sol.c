#include <stdio.h>

int main() {
    int mean = 0, score;
    
    for(int i=0; i<5; i++){
        scanf("%d", &score);
        mean += score<40? 40:score;
    }
    
    printf("%d", mean/5);
    return 0;
}
