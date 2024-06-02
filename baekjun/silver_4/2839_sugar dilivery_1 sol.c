#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if(N==3){printf("1"); return 0;}
    else if(N==7){printf("-1"); return 0;}
    else if(N<5){printf("-1"); return 0;}
    
    switch(N%5){
        case 0:
            printf("%d", N/5);
            break;
        case 1:
            printf("%d", N/5+1);
            break;
        case 2:
            printf("%d", N/5+2);
            break;
        case 3:
            printf("%d", N/5+1);
            break;
        case 4:
            printf("%d", N/5+2);
            break;
    }
    
    return 0;
}
