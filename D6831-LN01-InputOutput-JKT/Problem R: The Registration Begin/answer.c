#include <stdio.h>

int main() {
    char N[11], M[101], C;
    unsigned short O;
    scanf("%10s\n%100[^\n]", N, M);
    getchar();
    scanf("%c %hu", &C, &O);
    printf("Id    : %s\n", N);
    printf("Name  : %s\n", M);
    printf("Class : %c\n", C);
    printf("Num   : %hu\n", O);
    return 0;
}