#include <stdio.h>

int main() {
    unsigned short A;
    scanf("%hu", &A);

    puts(A % 2 ? "ODD" : "EVEN");
    return 0;
}