#include <stdio.h>

int main() {
    unsigned short T, N;
    unsigned int M, price;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        unsigned int max = 0;
        scanf("%hu %u", &N, &M);
        for (int i = 0; i < N; i++) {
            scanf("%u", &price);
            if (M / price > max) max = M / price;
        }
        printf("Case #%d: %u\n", t, max);
    }
    return 0;
}