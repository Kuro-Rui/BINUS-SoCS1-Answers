#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        int X[N];
        for (int i = 0; i < N; i++) scanf("%d", &X[i]);
        printf("Case #%d:", t);

        for (int i = N - 1; i >= 0; i--) printf(" %d", X[i]);
        printf("\n");
    }
    return 0;
}