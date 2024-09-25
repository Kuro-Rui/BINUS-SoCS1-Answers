#include <stdio.h>

int main() {
    char S[101];
    scanf("%100[^\n]", S);
    printf("Halo %s\n", S);
    return 0;
}