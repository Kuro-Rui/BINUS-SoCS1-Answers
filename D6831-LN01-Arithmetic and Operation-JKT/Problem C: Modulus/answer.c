#include <stdio.h>

int main() {
    unsigned short A, B;
    scanf("%hu %hu", &A, &B);
    printf("%hu\n", A % B);
    return 0;
}