#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%hu", &N);
        printf("Case %d: ", i);
        for (int j = 0; j < N; j++) {
            printf("%u", (j * (j + 1)) / 2 + 1);
            if (j < N - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}