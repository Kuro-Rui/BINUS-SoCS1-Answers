#include <stdio.h>

int main() {
    unsigned short N, steps = 0;
    scanf("%hu", &N);

    unsigned short A[N];
    for (int i = 0; i < N; i++) scanf("%hu", &A[i]);
    for (int i = 1; i <= N; i++) {
        steps++;
        if (A[i] == 1 || i == N) {
            printf("%hu", steps);
            if (i != N) printf(" ");
            steps = 0;
        }
    }
    printf("\n");
    return 0;
}