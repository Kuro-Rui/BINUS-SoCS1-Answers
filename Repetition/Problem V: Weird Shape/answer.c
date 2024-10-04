#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int i = 0; i < T; i++) {
        scanf("%hu", &N);
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if (j == 1 || j == N || k == 1 || k == N || j == k || j == N + 1 - k) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}