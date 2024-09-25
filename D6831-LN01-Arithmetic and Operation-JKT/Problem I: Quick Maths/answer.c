#include <stdio.h>

int main() {
    unsigned int A;
    scanf("%u", &A);

    unsigned int B = A + A;
    printf("%u plus %u is %u\n", A, A, B);

    unsigned int C = B - 1;
    printf("minus one is %u\n", C);
    return 0;
}