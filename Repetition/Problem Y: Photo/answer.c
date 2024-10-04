#include <stdio.h>

int main() {
    // N, M = height, width
    unsigned short T, N, M;
    scanf("%hu", &T);
    for (int i = 1; i <= T; i++) {
        scanf("%hu %hu", &N, &M);
        printf("Case #%d:\n", i);
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= M; k++) {
                if (j == 1 || j == N || k == 1 || k == M) printf("#");
                else printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}