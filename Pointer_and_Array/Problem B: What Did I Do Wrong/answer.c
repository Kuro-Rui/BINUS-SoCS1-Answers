#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        int A[N], B[N];
        for (int i = 0; i < N; i++) scanf("%d", &A[i]);
        for (int i = 0; i < N; i++) scanf("%d", &B[i]);
        printf("Case #%d:", t);

        for (int i = 0; i < N; i++) printf(" %d", A[i] - B[i]);
        printf("\n");
    }
    return 0;
}