#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        unsigned int windSpeeds[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) scanf("%u", &windSpeeds[i][j]);
        }

        unsigned long long speedSums[N];
        for (int i = 0; i < N; i++) speedSums[i] = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) speedSums[j] += windSpeeds[i][j];
        }
        printf("Case #%d:", t);
        for (int i = 0; i < N; i++) printf(" %llu", speedSums[i]);
        printf("\n");
    }
    return 0;
}