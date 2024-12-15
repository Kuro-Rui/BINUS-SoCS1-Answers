#include <stdio.h>

unsigned int F(unsigned int N) {
    if (N == 1) return 1;
    if (N % 2) return F(N - 1) + F(N + 1);
    return F(N / 2);
}

int main() {
    unsigned short T;
    unsigned int N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%u", &N);
        printf("Case #%d: %u\n", t, F(N));
    }
    return 0;
}