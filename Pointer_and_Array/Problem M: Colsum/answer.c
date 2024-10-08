#include <stdio.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        short table[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) scanf("%hd", &table[i][j]);
        }
        printf("Case #%d:", t);

        for (int i = 0; i < N; i++) {
            int colsum = 0;
            for (int j = 0; j < N; j++) colsum += table[j][i];
            printf(" %d", colsum);
        }
        printf("\n");
    }
    return 0;
}