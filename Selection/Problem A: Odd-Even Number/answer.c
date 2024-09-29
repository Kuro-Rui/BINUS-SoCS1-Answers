#include <stdio.h>

int main() {
    unsigned short A;
    scanf("%hu", &A);

    if (A % 2) puts("ODD");
    else puts("EVEN");
    return 0;
}