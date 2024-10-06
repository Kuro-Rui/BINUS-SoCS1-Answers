#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);
        printf("Case %d:", t);
        for (int i = 0; i < N; i++) printf(" %u", (i * (i + 1)) / 2 + 1);
        printf("\n");
    }
    return 0;
}