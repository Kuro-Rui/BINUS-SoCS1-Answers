#include <stdio.h>

int main() {
    unsigned short N, Q;
    scanf("%hu", &N);

    unsigned short views[N];
    for (int i = 0; i < N; i++) scanf("%hu", &views[i]);

    scanf("%hu", &Q);
    for (int i = 1; i <= Q; i++) {
        unsigned short A, B;
        scanf("%hu %hu", &A, &B);

        unsigned short sum = 0;
        for (int j = A - 1; j < B; j++) sum += views[j];
        printf("Case #%d: %hu\n", i, sum);
    }
    return 0;
}