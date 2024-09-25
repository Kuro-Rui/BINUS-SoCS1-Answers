#include <stdio.h>

int main() {
    unsigned int N;
    scanf("%u", &N);

    // See Problem AB: Stronger for explanation :p
    unsigned long long points = 100ULL * N + 50ULL * ((unsigned long long)(N - 1) * N / 2);
    printf("%llu\n", points);
    return 0;
}