#include <stdio.h>

int main() {
    char S[101];
    scanf("%100[^\n]", S);
    printf("%s-san\n", S);
    return 0;
}