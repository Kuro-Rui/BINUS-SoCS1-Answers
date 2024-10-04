#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%hu", &N);
        printf("Case #%d:\n", i);
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if (k <= N - j) printf(" ");
                else if ((k+j) % 2) printf("#");
                else printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}