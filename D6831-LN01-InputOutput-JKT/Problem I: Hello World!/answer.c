#include <stdio.h>

int main() {
    char name[101];
    scanf("%100[^\n]", name);
    printf("Hello %s!\n", name);
    return 0;
}