#include <stdio.h>

int main() {
    unsigned short N, Q, A;
    scanf("%hu", &N);

    unsigned int C[N], B;
    for (int i = 0; i < N; i++) scanf("%u", &C[i]);

    scanf("%hu", &Q);
    for (int i = 1; i <= Q; i++) {
        scanf("%hu %u", &A, &B);

        C[A - 1] = B;
        printf("Case #%d:", i);
        for (int j = 0; j < N; j++) printf(" %u", C[j]);
        printf("\n");
    }
    return 0;
}