#include <stdio.h>

int main() {
    char char1, char2;
    scanf("%c %c", &char1, &char2);
    printf("%hu\n", char1 * char2);
    return 0;
}