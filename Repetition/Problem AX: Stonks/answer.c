#include <stdio.h>

int main() {
    unsigned short N;
    int A;
    unsigned long long profit = 0;
    scanf("%hu", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &A);
        if (A > 0) profit += A;
    }
    printf("%llu\n", profit);
    return 0;
}