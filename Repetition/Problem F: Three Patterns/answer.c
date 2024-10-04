#include <stdio.h>

int main() {
    unsigned short N, K;
    scanf("%hu %hu", &N, &K);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("#");
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= N; i++) {
        if (i % K) for (int j = 0; j < N; j++) printf(".");
        else for (int j = 0; j < N; j++) printf("#");
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= N; j++) printf(j % K ? "." : "#");
        printf("\n");
    }
    return 0;
}