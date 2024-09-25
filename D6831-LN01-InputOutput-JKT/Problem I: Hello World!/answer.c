#include <stdio.h>

int main() {
    char N[101];
    scanf("%100[^\n]", N);
    printf("Hello %s!\n", N);
    return 0;
}