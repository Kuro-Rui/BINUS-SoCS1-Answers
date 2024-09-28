#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);

    // Binary: 1 (1) -> 10 (2) -> 100 (4) -> 1000 (8)
    // So 1ULL << N can be used to calculate 2^N
    unsigned long long outcomes = (1ULL << N) - 1;
    printf("%llu\n", outcomes);
    return 0;
}