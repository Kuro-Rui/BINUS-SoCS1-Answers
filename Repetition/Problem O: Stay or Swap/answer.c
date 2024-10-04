#include <stdio.h>

int main() {
    unsigned short T, N, M, K, X, max;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%hu %hu %hu", &N, &M, &K);
        max = K;
        for (int j = 0; j < N; j++) {
            scanf("%hu", &X);
            if (X <= M && X > max) max = X;
        }
        printf("Case #%d: %hu\n", i, max);
    }
    return 0;
}