#include <stdio.h>

int main() {
    unsigned short T, X;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &X);

        unsigned int matrix[X][X];
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < X; j++) scanf("%u", &matrix[i][j]);
        }

        unsigned int columnSums[X];
        for (int i = 0; i < X; i++) columnSums[i] = 0;
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < X; j++) columnSums[j] += matrix[i][j];
        }

        printf("Case #%d:", t);
        for (int i = 0; i < X; i++) printf(" %u", columnSums[i]);
        printf("\n");
    }
    return 0;
}