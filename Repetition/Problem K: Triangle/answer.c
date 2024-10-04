#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);
        printf("Case #%d:\n", t);
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (j <= N - i) printf(" ");
                else if ((j + i) % 2) printf("#");
                else printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}