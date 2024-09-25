#include <stdio.h>

int main() {
    unsigned short N, M;
    scanf("%hu %hu", &N, &M);
    for (int i = 0; i < M + 1; i++) printf("%hu\n", N + i);
    return 0;
}