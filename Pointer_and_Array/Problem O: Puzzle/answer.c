#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);

    unsigned short A[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) scanf("%hu", &A[i][j]);
    }
    
    for (int i = 0; i < N; i++) {
        unsigned short rowCheck[N + 1], columnCheck[N + 1];
        for (int j = 1; j <= N; j++) {
            rowCheck[j] = 0;
            columnCheck[j] = 0;
        }
        for (int j = 0; j < N; j++) {
            if (rowCheck[A[i][j]]) {
                puts("Nay");
                return 0;
            }
            rowCheck[A[i][j]] = 1;

            if (columnCheck[A[j][i]]) {
                puts("Nay");
                return 0;
            }
            columnCheck[A[j][i]] = 1;
        }
    }
    puts("Yay");
    return 0;
}