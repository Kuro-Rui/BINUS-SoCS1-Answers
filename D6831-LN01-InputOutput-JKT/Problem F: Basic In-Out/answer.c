#include <stdio.h>

int main() {
    char S[101];
    unsigned short A;
    scanf("%100[^\n]", S);
    scanf("%hu", &A);
    printf("%s\n%d\n", S, A);
    return 0;
}