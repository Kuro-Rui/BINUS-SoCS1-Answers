#include <stdio.h>

int main() {
    unsigned short T, N, A, B, C, D;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        unsigned short count = 0;
        scanf("%hu %hu %hu %hu %hu", &N, &A, &B, &C, &D);
        for (int i = 1; i <= N; i++) {
            if (i % A == 0 || i % B == 0 || i % C == 0 || i % D == 0) count++;
        }
        printf("Case #%d: %d\n", t, count);
    }
}