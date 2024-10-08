#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);

    unsigned short A[N];
    short B[N], temp;
    for (int i = 0; i < N; i++) scanf("%hu", &A[i]);
    for (int i = 0; i < N; i++) scanf("%hd", &B[i]);
    for (int i = 0; i < N; i++) {
        while (A[i] != i) {
            temp = B[i];
            B[i] = B[A[i]];
            B[A[i]] = temp;
            
            temp = A[i];
            A[i] = A[temp];
            A[temp] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%hd", B[i]);
        if (i < N - 1) printf(" ");
    }
    printf("\n");
    return 0;
}