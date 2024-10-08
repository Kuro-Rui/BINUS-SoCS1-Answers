#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);
    
    unsigned short teams[N + 1], number, incomplete = 0;
    for (int i = 1; i <= N; i++) teams[i] = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%hu", &number);
            if (number > 0) teams[number]++;
        }
    }
    
    for (int i = 1; i <= N; i++) if (teams[i] < N) incomplete++;
    printf("%hu\n", incomplete);
    return 0;
}