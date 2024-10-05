#include <stdio.h>

int main() {
    unsigned short T, X;
    scanf("%hu", &T);

    for (int t = 0; t < T; t++) {
        scanf("%hu", &X);
        for (int i = 1; i <= X; i++) {
            for (int j = 0; j < X - i; j++) printf(" ");
            for (int j = 0; j < 2 * i - 1; j++) printf("*");
            printf("\n");
        }
    }
    return 0;
}