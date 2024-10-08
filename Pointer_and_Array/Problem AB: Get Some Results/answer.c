#include <stdio.h>

void multiply(unsigned short N, int A[N][N], int B[N][N], int C[N][N], int result[N][N]) {
    // Initialize temp matrix
    int temp[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) temp[i][j] = 0;
    }

    // A * B = temp
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) temp[i][j] += A[i][k] * B[k][j];
        }
    }
    // temp * C = result
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) result[i][j] += temp[i][k] * C[k][j];
        }
    }
}

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);

        int A[N][N], B[N][N], C[N][N], final[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) scanf("%d", &A[i][j]);
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) scanf("%d", &B[i][j]);
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) scanf("%d", &C[i][j]);
        }
        multiply(N, A, B, C, final);
        printf("Case #%d:\n", t);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j > 0) printf(" ");
                printf("%d", final[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}