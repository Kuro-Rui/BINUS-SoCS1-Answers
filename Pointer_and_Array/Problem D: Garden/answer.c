#include <stdio.h>

int main() {
    unsigned short X, Y, T, a, b, c;
    scanf("%hu %hu", &X, &Y);

    unsigned short garden[X][Y];
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) scanf("%hu", &garden[i][j]);
    }

    scanf("%hu", &T);
    for (int i = 0; i < T; i++) {
        scanf("%hu %hu %hu", &a, &b, &c);
        garden[a - 1][b - 1] = c;
    }
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            printf("%hu", garden[i][j]);
            if (j < Y - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}