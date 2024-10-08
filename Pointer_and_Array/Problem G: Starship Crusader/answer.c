#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        unsigned short failed = 0;
        scanf("%hu", &N);

        unsigned int X[N], Y[N];
        for (int i = 0; i < N; i++) scanf("%d", &X[i]);
        for (int i = 0; i < N; i++) scanf("%d", &Y[i]);

        for (int i = 0; i < N; i++) if (X[i] < Y[i]) failed++;
        printf("Case #%d: %hu\n", t, failed);
    }
    return 0;
}