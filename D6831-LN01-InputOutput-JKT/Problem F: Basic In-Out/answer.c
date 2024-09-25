#include <stdio.h>

int main() {
    char S[101];
    int A;
    scanf("%100[^\n]", S);
    scanf("%d", &A);
    printf("%s\n%d\n", S, A);
    return 0;
}