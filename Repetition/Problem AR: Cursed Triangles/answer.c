#include <stdio.h>

int main() {
    unsigned short M, N;
    scanf("%hu %hu", &M, &N);

    for (int i = 0; i < M; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 0; k < N - j; k++) printf(" ");
            for (int k = 0; k < j; k++) printf("*");
            printf("\n");
        }
    }
    return 0;
}