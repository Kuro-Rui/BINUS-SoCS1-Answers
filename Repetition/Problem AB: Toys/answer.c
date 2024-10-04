#include <stdio.h>

int main() {
    unsigned short T, N, A, B, C, D;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        unsigned short count = 0;
        scanf("%hu %hu %hu %hu %hu", &N, &A, &B, &C, &D);
        for (int j = 1; j <= N; j++) {
            if (j % A == 0 || j % B == 0 || j % C == 0 || j % D == 0) count++;
        }
        printf("Case #%d: %d\n", i, count);
    }
}