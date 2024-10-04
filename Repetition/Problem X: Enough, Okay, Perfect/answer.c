#include <stdio.h>

unsigned int U(unsigned short n) {
    if (n == 1) return 1;
    return 2 * U(n - 1) + 1;
}

int main() {
    unsigned short Q;
    scanf("%hu", &Q);
    printf("%u\n", U(Q + 1));
    return 0;
}