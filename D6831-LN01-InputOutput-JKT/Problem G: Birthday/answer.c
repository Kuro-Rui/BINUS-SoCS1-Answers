#include <stdio.h>

int main() {
    char name[101];
    scanf("%100[^\n]s", name);
    printf("Happy Birthday to %s.\n", name);
    return 0;
}