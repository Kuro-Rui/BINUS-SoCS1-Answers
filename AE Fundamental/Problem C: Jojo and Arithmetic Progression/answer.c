#include <stdio.h>

int main() {
    unsigned short N, M;
    scanf("%hu %hu", &N, &M);
    for (int i = 0; i < M + 1; i++) printf("%d\n", N + i);
    return 0;
}