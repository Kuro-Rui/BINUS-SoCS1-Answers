#include <stdio.h>

int main() {
    unsigned int N;
    scanf("%u", &N);

    // 100 + (100 + 1 x 50) + (100 + 2 x 50) + ... + (100 + (N - 1) x 50)
    // Simplify to 100N + 50(1 + 2 + ... + (N - 1))
    // 100N + 50 * (N - 1) * N / 2
    // (MAX) If N = 1.000.000, Damage = 25.000.075.000.000, so we should use long long
    unsigned long long damage = 100ULL * N + 50ULL * ((unsigned long long)(N - 1) * N / 2);
    printf("%llu\n", damage);
    return 0;
}