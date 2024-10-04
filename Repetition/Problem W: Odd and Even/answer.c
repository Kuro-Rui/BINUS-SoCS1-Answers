#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);
    
    for (int i = 1; i <= T; i++) {
        scanf("%hu", &N);
        unsigned short A[N], odds = 0, evens = 0;
        for (int j = 0; j < N; j++) {
            scanf("%hu", &A[j]);
            if (A[j] % 2) odds++;
            else evens++;
        }
        printf("Odd group : %hu integer(s).\n", odds);
        printf("Even group : %hu integer(s).\n\n", evens);
    }
    return 0;
}