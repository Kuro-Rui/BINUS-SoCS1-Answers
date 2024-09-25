#include <stdio.h>

int main() {
    unsigned short A, B, C;
    scanf("%hu %hu %hu", &A, &B, &C);
    printf("%llu\n", (unsigned long long)A * B * C);
    return 0;
}