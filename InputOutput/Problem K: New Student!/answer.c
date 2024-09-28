#include <stdio.h>

int main() {
    char N[101], A[9];
    unsigned short U;
    scanf("%100[^\n]", N);
    scanf("%8s %hu", A, &U);
    printf("Name: %s\n", N);
    printf("NIS: %s\n", A);
    printf("Age: %hu\n", U);
    return 0;
}