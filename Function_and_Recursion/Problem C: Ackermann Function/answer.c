#include <stdio.h>

unsigned short A(unsigned short m, unsigned short n) {
    if (m == 0) return n + 1;
    if (n == 0) return A(m - 1, 1);
    return A(m - 1, A(m, n - 1));
}

int main() {
    unsigned short M, N;
    scanf("%hu %hu", &M, &N);
    printf("result: %hu\n", A(M, N));
    return 0;
}